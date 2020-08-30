// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/

/*Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.
Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.*/

class Solution {
public:
    int findComplement(int num) {
        long int count = floor(log2(num))+1;
        long int n = pow(2,count);
        return n-num-1;
    }
};
