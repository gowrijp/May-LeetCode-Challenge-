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

// My Solution
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int i=0;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                i=i+2;
            }
            else{
                return nums[i];
                
            }
        }
        if(i==n-1 and nums[i]!=nums[i-1]) return nums[i];
        return -1;
    }
};
