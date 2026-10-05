class Solution {
public:
    bool sumGame(string s) {
        int half = s.size() / 2;
        int sumL = 0, sumR = 0;
        int sign[2] = {0, 0};
        bool unpairedAns = false;
        
        for(int i = 0; i < half; i++){
            if(s[i] != '?') sumL += s[i] - '0';
            else sign[0]++;
        }
        for(int i = half; i < s.size(); i++){
            if(s[i] != '?') sumR += s[i] - '0';
            else sign[1]++;
        }
        if((sign[0] + sign[1]) & 1){
            return true;
        }

        return 2 * (sumL - sumR) != 9 * (sign[1] - sign[0]);
    }
};