class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
//         vector<int> circularArray(A.size());
//         for(int i = 1; i<A.size(); i++){
            
//             circularArray[circularArray.size()-1] = A[0];
//             circularArray[i-1] = A[i];
//         }
        if(!A.size()){
            return 0;
        }
        if(A.size() == 1){
            return A[0];
        }
        int sum = A[0];
        int minSoFar = A[0];
        int minTotal = A[0];
        int cmax = A[0];
        int max_so_far = A[0];
        for(int i =1; i< A.size(); i++){
            cmax = max(A[i], cmax+A[i]);
            max_so_far = max(max_so_far, cmax);
            minSoFar = min(A[i], minSoFar + A[i]);
            minTotal = min(minTotal, minSoFar);
            sum += A[i];
        }
        // int cmax2 = circularArray[0];
        // int max_so_far2 = circularArray[0];
        // for(int i =1; i< circularArray.size(); i++){
        //     cmax2 = max(circularArray[i], cmax2+circularArray[i]);
        //     max_so_far2 = max(max_so_far2, cmax2);
        if(sum == minTotal) return max_so_far;
        return max(sum - minTotal, max_so_far);
        
    }
};

// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3330/
// O(N)
