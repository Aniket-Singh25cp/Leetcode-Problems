class Solution {
public:
    bool judgeCircle(string moves) {
        int ups = 0, sides = 0;
        for(char x : moves){
            if(x == 'U') ups++;
            if(x == 'D') ups--;
            if(x == 'L') sides++;
            if(x == 'R') sides--; 
        }
        if(ups == 0 && sides == 0) return true;
        return false;
    }
};