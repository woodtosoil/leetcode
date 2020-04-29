/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
    TreeNode* sorted(vector<int>& nums,int l,int r)
    {
        if(l>=r)
        {
            return NULL;
        }//分治边界左闭右开
        int mid = l+(r-l)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=sorted(nums,l,mid);//[l,mid)
        root->right=sorted(nums,mid+1,r);//[mid+1,r)
        //若条件为l>r则左闭右闭，sorted范围取[l,mid-1][mid+1,r]
        //并且此时n=size-1
        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return sorted(nums,0,n);        
    }
};
// @lc code=end

