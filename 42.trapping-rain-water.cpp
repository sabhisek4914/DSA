/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);
        int large=INT_MIN;
        for (int i=0; i<n; i++) {
            large=max(height[i],large);
            left[i]=large;
        }
        large=INT_MIN;
        for (int i=n-1; i>=0; i--) {
            large=max(height[i],large);
            right[i]=large;
        }
        int cnt=0;
        for (int i=0; i<n; i++) {
            cnt+=min(left[i],right[i])-height[i];
        }
        return cnt;
    }
};
// @lc code=end

