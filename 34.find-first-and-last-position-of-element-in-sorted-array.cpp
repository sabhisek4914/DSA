/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return vector<int>({-1,-1});
        
        //First Position
        int s=0,e=nums.size()-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(nums[m]>=target){
                e=m;
            }else{
                s=m+1;
            }
        }
        if(nums[s]!=target){
            return vector<int>({-1,-1});
        }

        //Last Position
        int s1=0,e1=nums.size();
        while(s1<e1){
            int m=s1+(e1-s1)/2;
            if(nums[m]>target){
                e1=m;
            }else{
                s1=m+1;
            }
        }
        if(s==s1){
            return vector<int>({s,s});
        }
        return vector<int>({s,s1-1});

    }
};
// @lc code=end

