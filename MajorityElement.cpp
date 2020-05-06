class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int, int> map; 
    for (int i = 0; i < nums.size(); i++) 
        map[nums[i]]++; 
  
    // find the max frequency 
    int max_count = 0, res = -1; 
    for (auto i : map) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 

     }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
// O(n)
