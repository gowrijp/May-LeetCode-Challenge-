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

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        // We can consider each label as a graph node
        // find the indegree and out degree of each node
        vector<int> indegree(N, 0), outdegree(N, 0);
        for(auto trust_edge: trust) {
            ++indegree[trust_edge[1] - 1];
            ++outdegree[trust_edge[0] - 1];
        }
        
        // now check which node has N-1 indegree and for that node
        // check if its outdegree is also 0, if both cond. are true, then that
        // ndoe is town judge
        for(int i = 0; i < indegree.size(); i++) {
            if(indegree[i] == N-1 && outdegree[i] == 0)
                return i + 1;
        }
        return -1;
    }
};
