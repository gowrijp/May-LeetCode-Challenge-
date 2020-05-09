class Solution {
public:
    bool isPerfectSquare(int num) {
        //base cases
        if(!num)
            return false;
        
        if(num==1)
            return true;
        
        //main code
        for(int i=1;i<=num/i;i++)
        {
            if(i*i==num)
            {
                return true;
                break;
            }
        }
        return false;
    }
};

//Time Complexity: O(n/i)
//Runtime: 0ms Memory: 20mb
//LeetCode Link: https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
