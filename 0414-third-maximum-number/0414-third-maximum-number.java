class Solution {
    public int thirdMax(int[] nums) {
        Integer largest = null, sLargest = null, tLargest = null;
        for(int x : nums){
            if ((largest != null && x == largest) ||
                (sLargest != null && x == sLargest) ||
                (tLargest != null && x == tLargest)) {
                continue;
            }
            if(largest == null || x > largest){
                tLargest = sLargest;
                sLargest = largest;
                largest = x;
            }else if(x != largest && (sLargest == null || x > sLargest)){
                tLargest = sLargest;
                sLargest = x;
            }else if(x != sLargest && (tLargest == null || x > tLargest)){
                tLargest = x;
            }
        }
        return (tLargest == null) ? largest : tLargest;
    }
}