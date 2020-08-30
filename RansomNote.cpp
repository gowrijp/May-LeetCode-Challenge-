class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> mp;
        int n=magazine.size();
        for(int i=0;i<n;i++){
            mp[magazine[i]-'a']++;
        }
        n=ransomNote.size();
        for(int i=0;i<n;i++){
            mp[ransomNote[i]-'a']--;
            if(mp[ransomNote[i]-'a']<0){
                return false;
            }
        }
        return true;
    }
};

//LeetCode Link: https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
