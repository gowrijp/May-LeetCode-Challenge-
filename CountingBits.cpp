//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3343/

class Solution {
public:
    vector<int> countBits(int num) {
        if(num < 0) return vector<int> {};
        
        vector<int> res(num + 1, 0);
        for(int i=1;i<=num;++i){
            res[i] = res[i & (i - 1)] + 1;
        }
        return res;
    }
};
