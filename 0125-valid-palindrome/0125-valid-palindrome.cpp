class Solution {
private:

bool isvalid(char ch){
    if((ch >='A' && ch <='Z') || (ch>='a' && ch <='z') || (ch >='0' && ch <='9') ){
        return true;
    }else{
        return false;
    }

}
 char tolowercase(char ch ){
    if((ch>='a' && ch <='z') || (ch >='0' && ch <='9')){
    return ch;
    }
    else{
    char temp = ch - 'A' + 'a';
    return temp;
    }
 }
bool checkvalidpalindrome(string &s,int st,int e){
    //base case
    if(st>=e){
        return true;
    }

    if(s[st] != s[e]){
        return false;
    }else{
        //recursive call
        return checkvalidpalindrome(s,st+1,e-1);
    }
    



}
public:
    bool isPalindrome(string s) {
        string ramp="";
        for(int i=0;i<s.length();i++){
            if(isvalid(s[i])){
                ramp.push_back(s[i]);
            }
        }
        for(int i=0;i<ramp.length();i++){
            ramp[i]= tolowercase(ramp[i]);
    }
    return checkvalidpalindrome(ramp,0,ramp.size()-1);
    }
};