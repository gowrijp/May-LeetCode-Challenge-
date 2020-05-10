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
