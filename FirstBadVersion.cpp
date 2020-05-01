// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) {
            right = mid;
        } 
        else 
        {
            left = mid + 1;
        }
    }
    return left;
}
};

//Time Complexity: O(logn)
//Algorithm: Binary Search 
//Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/
