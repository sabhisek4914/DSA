/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int> pq;
        int n = nums.size();

        for(int i = 0;i < n;i++) pq.push(nums[i]);
        while(--k) pq.pop();
        
        return pq.top();
    }
};
// @lc code=end

