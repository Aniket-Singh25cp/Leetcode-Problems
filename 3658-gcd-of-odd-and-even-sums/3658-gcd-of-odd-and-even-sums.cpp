class Solution {
public:
    int gcdd(int a, int b){ //gcd by euclidean algorithm
        return b == 0 ? a : gcdd(b, a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int a = n*n;
        int b = n*(n+1);
        return gcdd(a,b);
    }
};