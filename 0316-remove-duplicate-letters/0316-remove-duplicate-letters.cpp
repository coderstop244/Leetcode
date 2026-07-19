class Solution {
public:
    string removeDuplicateLetters(string s) {
         stack<int> st;
        unordered_map<char,int> last;
        unordered_map<char,bool> visited;

        for(int i = 0; i < s.size();i++){
            last[s[i]] = i;
        }
        for(int i = 0; i < s.size();i++){
            char curr = s[i];
            if(visited[curr])
                continue;
            
            while(!st.empty() && st.top() > curr && last[st.top()] > i){
                visited[st.top()] = false;
                st.pop();
            }
            st.push(curr);
            visited[curr] = true;
        }
        // reverse(st.begin(),st.end())
        string ans;
            while(!st.empty()){
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};
    