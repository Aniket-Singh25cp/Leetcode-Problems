class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int x = 0; x < n; x+=2*k){
            int i = x;
            int j = min(x + k - 1, n - 1);
            while(i < j){
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++;
                j--;
            }
        }
        return s;
    }
};