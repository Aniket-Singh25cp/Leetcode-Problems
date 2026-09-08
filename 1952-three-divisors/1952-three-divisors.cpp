class Solution {
public:
    bool isThree(int n) {
        int c = 0;
        for(int i = 1;i<=n;i++){
            if(n%i==0) c+=1;
        }
        return c==3 ? true : false;
    }
};