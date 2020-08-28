
class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            if(s.length() < p.length()) return {};
            vector<int> mp_p(26), mp_s(26), res;
            for(char c : p) ++mp_p[c-'a'];
            for(int i = 0; i < p.length()-1; ++i) ++mp_s[s[i]-'a'];
            for(int i = 0, j = p.length()-1; j < s.length(); ++i, ++j)
            {
                ++mp_s[s[j]-'a'];
                if(mp_p == mp_s) res.push_back(i);
                --mp_s[s[i]-'a'];
            }
            return res;
        }
};

//Question https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3332/
//Explanation- https://www.dailycodingproblem.com/blog/anagram-indices/
