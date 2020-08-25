class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> count(N+1);
        for(vector<int> t: trust){
            count[t[0]]--;
            count[t[1]]++;
        }
        for(int i = 1; i<=N; i++){
            if(count[i] == N-1){
                return i;
            }
        }
        return -1;
    }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
// O(N)
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
//My Solution

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int siz=trust.size();
        if(N==1 and siz == 0){
            return 1;
        }
        map<int,int> fir;
        map<int,int> sec;
        
        for(int i=0;i<siz;i++){
            if(fir.find(trust[i][0])==fir.end()){
                fir[trust[i][0]]=1;
            }
            
            sec[trust[i][1]]++;
            
        }
        for(auto i: sec){
            if(i.second==N-1 && fir.find(i.first)==fir.end()){
                return i.first;
            }
        }
        return -1;
        
    }
};
