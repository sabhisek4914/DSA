/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1,e=n;
        while(s<e){
            int mid=s+(e-s)/2;
            if(isBadVersion(mid)){
                e=mid;
            }else{
                s=mid+1;
            }
        }
        return s;
        // for (int i = 1; i<=n;i++){
        //     if(isBadVersion(i)){
        //         return i;
        //     }
        // }    
        // return -1;
    }
};
// @lc code=end

