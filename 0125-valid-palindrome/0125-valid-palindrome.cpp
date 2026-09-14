class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.size();){
            if(!isalnum(s[i])){
                s.erase(i,1);
            }else{
                s[i] = tolower(s[i]);
                i++;
            }
        }
        int i = 0, j = s.size() - 1;
        while(i < j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};