class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> map;
        for(const char &c : s1){
            map[c]++;
        }
        int j = 0, i = 0, count = s1.size();
        while(j < s2.size()){
            if(map[s2.at(j++)]-- > 0){
                count--;
            }
            if(count == 0){
                return true;
            }
            if(j - i == s1.size() && map[s2.at(i++)]++ >= 0){
                count++;
            }
        }
        return false;
    }
};

