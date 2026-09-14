class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[256] = {0};
        int freq[256] = {0};
        for(char c : s){
            hash[c]++;
        }
        for(char c : t){
            freq[c]++;
        }
        for(int i = 0; i < 256; i++){
            if(hash[i] != freq[i]) return false;
        }
        return true;
    }
};