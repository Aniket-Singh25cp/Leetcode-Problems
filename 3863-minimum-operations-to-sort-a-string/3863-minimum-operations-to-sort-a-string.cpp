class Solution {
public:
    int minOperations(string s) {
        string s2 = s;
        sort(s2.begin(), s2.end());
        if(s == s2) return 0;
        if(s.size() == 2) return -1;
        char mx = 'a', mn = 'z';
        for(int i = 0; i < s.size(); i++){
            mx = max(mx, s[i]);
            mn = min(mn, s[i]);
        }
        if(s[0] == mn || s[s.size() - 1] == mx){
            return 1;
        }
        for(int i = 1; i < s.size() - 1; i++){
            if(s[i] == mn || s[i] == mx){
                return 2;
            }
        }
        return 3;
    }
};