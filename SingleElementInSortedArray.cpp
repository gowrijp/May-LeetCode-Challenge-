class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>M;
        
        for(int i=0;i<nums.size();i++)
        {
            M[nums[i]]++;
        }
        
        for(auto i:M)
        {
            if(i.second==1)
            {
                return i.first;
            }
        }
       return -1; 
    }
};

//Time Complexity: O(1)
//LeetCode Link:https://leetcode.com/problems/single-element-in-a-sorted-array/
