/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int cur_s=0;
        // int start=0;
        // int res=0;
        // if(nums.size()==1){
        //     if(nums[0]==k){
        //         res++;
        //     }
        //     return res;
        // }
        // for (int i = 0;i<nums.size();i++){
        //     cur_s+=nums[i];
        //     while(cur_s>k){
        //         cur_s-=abs(nums[start]);
        //         start++;
        //     }
        //     if(cur_s==k){
        //         res++;
        //         if(start<nums.size()){
        //             cur_s-=abs(nums[start]);
        //             start++;
        //         }
        //     }
        // }   
        // return res;
        int n = nums.size(); // take the size of the array
        
        int prefix[n]; // make a prefix array to store prefix sum
        
        prefix[0] = nums[0]; // for element at index at zero, it is same
        
        // making our prefix array
        for(int i = 1; i < n; i++)
        {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        
        unordered_map<int,int> mp; // declare an unordered map
        
        int ans = 0; // to store the number of our subarrays having sum as 'k'
        
        for(int i = 0; i < n; i++) // traverse from the prefix array
        {
            if(prefix[i] == k) // if it already becomes equal to k, then increment ans
                ans++;
            
            // now, as we discussed find whether (prefix[i] - k) present in map or not
            if(mp.find(prefix[i] - k) != mp.end())
            {
                ans += mp[prefix[i] - k]; // if yes, then add it our answer
            }
            
            mp[prefix[i]]++; // put prefix sum into our map
        }
        
        return ans; // and at last, return our answer
    }
};
// @lc code=end

