/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m-- + n-- -1;
        //赋值给p后，m和n自减一，p为两数列长度和
        while(m>=0 && n>=0)
        {
            //从前到后比较大小，比较完后，大的数列自减一，再比较
            nums1[p--]=nums1[m]>nums2[n]?nums1[m--]:nums2[n--];
        
        }
        while(n>=0)
        {
            //数列2有剩余，说明剩余的都比数列1小，直接放到数列1前几位
            nums1[p--]=nums2[n--];
        }
    }
};
// @lc code=end

