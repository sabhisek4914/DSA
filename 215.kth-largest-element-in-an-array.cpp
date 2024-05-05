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
    // int partition(vector<int>& nums,int s,int e){
    //     int p=nums[e];
    //     int i=s-1;
    //     for(int j=s;j<e;j++){
    //         if(nums[j]>p){
    //             i++;
    //             swap(nums[j],nums[i]);
    //         }
    //     }
    //     swap(nums[i+1],nums[e]);
    //     cout<<i+1<<endl;
    //     return i+1;
    // }
    // int quickSort(vector<int>& nums, int s, int e, int k) {
    //     int p=partition(nums,s,e);
    //     if(p==k-1)
    //         return nums[p];
    //     else if(p>k-1){
    //         return quickSort(nums,s,p-1,k);
    //     }else{
    //         return quickSort(nums,p+1,e,k);
    //     }
    // }
    // int findKthLargest(vector<int>& nums, int k) {
    //     return quickSort(nums,0,nums.size()-1,k);
    // }
};
// @lc code=end

