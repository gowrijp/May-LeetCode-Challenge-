class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL) return 0;
        
        set<int> numSet;
        int cnt = 1;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            numSet.insert(curr->val);
            
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        
        for(auto num : numSet){
            if(cnt == k) return num;
            cnt++;
        }
        
        return -1;
    }
};
