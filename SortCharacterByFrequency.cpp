class Solution {
public:
    
    
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
            
        
        auto comp = [](pair<int, char> a, pair<int, char> b) {
            return a.first > b.first;
        };
        
        vector<pair<int,char>>v;
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            v.push_back(make_pair(i->second,i->first));
        }
        
        sort(v.begin(),v.end(),comp);
        
        string ans="";
      
      
        for(auto i:v) {
            while(i.first) {
                ans += i.second;    
                i.first--;
            }
        }
        return ans;
    }
};

//Runtime: 40ms
//Memory: 8.6MB
//LeetCode Link:https://leetcode.com/problems/sort-characters-by-frequency/
