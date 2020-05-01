/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
/**
 * 获取杨辉三角的指定行
 * 直接使用组合公式C(n,i) = n!/(i!*(n-i)!)
 * 则第(i+1)项是第i项的倍数=(n-i)/(i+1);
 */
    vector<int> getRow(int rowIndex) {
        vector<int> tri;
        long cur=1;
        tri.push_back(cur);
        for(int i=0;i<rowIndex;++i)
        {
            cur=cur*(rowIndex-i)/(i+1);//i从0开始
            tri.push_back(int(cur));
        }
        return tri;
    }


};
// @lc code=end

