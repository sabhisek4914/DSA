/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int i=0,j=0;
        vector<string> ranges;
        if(nums.size()==0){
            return ranges;
        }else if(nums.size()==1){
            ranges.push_back(to_string(nums[0]));
        }else{
            while(j<nums.size()) {
                while(j<nums.size()-1 && nums[j]+1==nums[j+1]){
                    j++;
                }
                int s=i;
                int e=j;
                string str;
                i=j+1;
                j++;
                if(s==e){
                    str=to_string(nums[e]);
                }else{
                    str=to_string(nums[s])+"->"+to_string(nums[e]);
                }
                ranges.push_back(str);
            }
        }
        return ranges;
    }
};
// @lc code=end

