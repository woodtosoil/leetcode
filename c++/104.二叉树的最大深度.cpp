/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
#include<queue>
class Solution {
public:

    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int num=0;
        //利用队列排序，从旧到新节点迭代排查
        queue<TreeNode*> tree;
        tree.push(root);
        while(!tree.empty())
        {
            int n=tree.size();
            for(int i=0;i<n;++i)
            {
                TreeNode* p=tree.front();
                if(p->left!=NULL)
                {
                    tree.push(p->left);
                }
                if(p->right!=NULL)
                {
                    tree.push(p->right);
                }
                tree.pop();
            }
            num=num+1;
            
        }
        return num;



    }
};
// @lc code=end

