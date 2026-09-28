class Solution {
public:
    int maxDepth(string s) {
        int leftbr = 0, rightbr = 0;
        int maxDepth = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                leftbr++;
            }else if (s[i] == ')') rightbr++;
            int depth = leftbr - rightbr;
            maxDepth = max(maxDepth, depth);
        }
        return maxDepth;
    }
};