class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        
        
        for(const char&c : magazine){
            map2[c]++;
        }
        
        for(const char&c : ransomNote){
            map1[c]++;
            if(map1[c]>map2[c]){
                return false;
            }
            
        }
        return true;
        
    }
};

//LeetCode Link: https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
