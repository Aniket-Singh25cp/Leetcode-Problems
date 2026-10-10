class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char hashS[256] = {0};
        char hashT[256] = {0};

        for(int i = 0; i < s.size(); i++){
            char c1 = s[i];
            char c2 = t[i];

            if(hashS[c1] && hashS[c1] != c2) return false;

            if (hashT[c2] && hashT[c2] != c1) return false;

            hashS[c1] = c2;
            hashT[c2] = c1;
        }
        return true;
    }
};