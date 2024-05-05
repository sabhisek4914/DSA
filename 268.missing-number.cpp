/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =1;i<=n;i++){
            ans = ans ^ i;
        }
        cout<<ans<<endl;
        for(int i =0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        return ans;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>v(n+1,-1);
//         for(int i =0;i<nums.size();i++){
//             v[nums[i]] = nums[i];
//         }
//         for(int i =0;i<v.size();i++){
//             if(v[i]==-1)return i;
//         }
//         return 0;
//     }
// };



// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>v(n+1,-1);
//         for(int i =0;i<nums.size();i++){
//             v[nums[i]] = nums[i];
//         }
//         for(int i =0;i<v.size();i++){
//             if(v[i]==-1)return i;
//         }
//         return 0;
//     }
// };

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int sum=n*(n+1)/2;
//         int c_sum=0;
//         for(int i=0; i<n; i++){
//             c_sum+=nums[i];
//         }        
//         return sum-c_sum;
//     }
// };
// @lc code=end

