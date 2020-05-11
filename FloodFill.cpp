class Solution {
public:
    void isLocationSafe(vector<vector<int>>& image,int i,int j,int color,int paint)
    {
        if(i<0 || j<0)
            return;
        if(i>=image.size() || j>=image[0].size())
            return;
        if(image[i][j]!=color)
        {
            return;
        }
        image[i][j]=paint;
        isLocationSafe(image,i+1,j,color,paint);
        isLocationSafe(image,i-1,j,color,paint);
        isLocationSafe(image,i,j+1,color,paint);
        isLocationSafe(image,i,j-1,color,paint);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image.size() && image[sr][sc]!=newColor)
        {
            isLocationSafe(image,sr,sc,image[sr][sc],newColor);
        }
        return image;
    }
};

//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
//O(N)
