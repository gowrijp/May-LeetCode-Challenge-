// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/

class Solution {
public:
    int findComplement(int num) {
        long int count = floor(log2(num))+1;
        long int n = pow(2,count);
        return n-num-1;
    }
};
