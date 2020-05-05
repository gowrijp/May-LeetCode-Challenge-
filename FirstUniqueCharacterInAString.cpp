class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for(const char&c : s){
            m[c]++;
        }
        for(int i = 0; i<s.length(); i++){
            if(m[s[i]] == 1){
                return i;
            }
            else{
                continue;
            }
        }
        return -1;
    }
};

//Method 2

class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<int,int> lettersStore;
        for(int ch=0;ch<s.length();ch++)
        {
            lettersStore[s[ch]]++;    //another method
        }
        for(int ch=0;ch<s.length();ch++)
        {
            if(lettersStore[s[ch]] == 1)
                return ch;
        }
        return -1;  
    }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
// O(n)
