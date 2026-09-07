class Solution {
public:
    int pivotInteger(int n) {
       int tSum = (n*(n+1))/2;
       int sq = sqrt(tSum);
       return (sq*sq==tSum) ? sq : -1;
    }
};