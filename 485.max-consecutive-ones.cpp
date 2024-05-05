/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int ans = INT_MIN ;
        int count = 0 ; 
        for ( int i = 0 ; i < nums.size() ; i++ )
        {
            if ( nums[i] == 1 )
                count++ ;
            else
            {
                ans = max ( ans , count ) ;
                count = 0 ; 
            }
        }
        if ( ans < count )
            return count ;
        return ans ;
    }
};
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int large=INT_MIN;
//         int cnt=0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]!=1){
//                 //reset
//                 cnt=0;
//             }else{
//                 cnt++;
//             }
//             if(cnt>large){
//                 // cout<<cnt<<" "<<large<<endl;
//                 large=cnt;
//             }
//         }
//         return large;
//     }
// };
// @lc code=end

