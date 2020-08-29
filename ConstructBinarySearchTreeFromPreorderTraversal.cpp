/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3339/
class Solution {
public:
    TreeNode *constructBST(vector<int> & preorder,int start,int end)
    {
        if(start>end)
            return NULL;
        TreeNode *root=new TreeNode(preorder[start]);
        int j=start+1;
        while(j<=end && preorder[j]<root->val)
            j++;
        root->left=constructBST(preorder,start+1,j-1);
        root->right=constructBST(preorder,j,end);
        return root;
    }
    TreeNode *bstFromPreorder(vector<int> & preorder) 
    {
        int start=0,end=preorder.size()-1;
        return constructBST(preorder,start,end);
    }
};
