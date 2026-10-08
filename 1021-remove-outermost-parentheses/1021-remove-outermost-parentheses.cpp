class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int path = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                if(path > 0){
                    ans += s[i];
                }
                path++;
            }
            else{
                path--;
                if(path > 0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};