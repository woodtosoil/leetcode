/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int> > tree;
        vector<int> son;
        queue<TreeNode*> que;
        if(root==NULL)
        {
            return tree;
        }

        que.push(root);
        while(!que.empty())
        {
            int n=que.size();
            for(int i=0;i<n;++i)
            {
                TreeNode* p=que.front();
                son.push_back(p->val);
                if(p->left!=NULL)
                {
                    que.push(p->left);
                }   
                if(p->right!=NULL)
                {
                    que.push(p->right);
                    
                }     
                que.pop();
            }

            tree.push_back(son);
            son.clear();
        }
        reverse(tree.begin(),tree.end());
        return tree;

    }
};
// @lc code=end

