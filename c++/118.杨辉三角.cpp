/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > tri(numRows,vector<int>());
        for(int i=0;i<numRows;++i)
        {
            tri[i].resize(i+1);
            for(int j=0;j<=i;++j)
            {
                tri[i][0]=1;
                tri[i][i]=1;
                if(i>1&&j!=0&&j!=i)
                {
                    tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
                }
            }
        }
        return tri;
    }
};
// @lc code=end

