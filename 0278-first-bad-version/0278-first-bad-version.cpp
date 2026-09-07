// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int idx = 1;
        for(int i=n-1;i>=1;i--){
            if(isBadVersion(i)==false){
                idx = i+1;
                break;
            }
        } 
        return idx;
    }
};