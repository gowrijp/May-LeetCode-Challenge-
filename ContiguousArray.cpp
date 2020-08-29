class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]==0)
                nums[i]=-1;
        int sum=0;
        unordered_map<int,int> map;
        map[0]=-1;
        int max_len=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(map.find(sum)!=map.end())
            {
                if(max_len<i-map[sum])
                    max_len=i-map[sum];
            }
            else
            {
                map[sum]=i;
            }
        }
        return max_len;
    }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3341/
/*
Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

Example 1:
Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
Example 2:
Input: [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
*/
