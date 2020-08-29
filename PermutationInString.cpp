class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int> mp_s2(26), mp_s1(26);
        for(char c: s1) ++ mp_s1[c-'a'];
        for(int i=0;i<s1.length()-1;++i){
            ++mp_s2[s2[i]-'a'];
        }
        for(int i=0, j=s1.length()-1;j<s2.length();++i,++j){
            ++mp_s2[s2[j]-'a'];
            if(mp_s1==mp_s2){
                return true;
                break;
            }
            --mp_s2[s2[i]-'a'];
        }
        return false;
    }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3333/
