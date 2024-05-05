/*
 * @lc app=leetcode id=845 lang=cpp
 *
 * [845] Longest Mountain in Array
 */

// @lc code=start
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int large=0;
        int ctr=0;
        if(arr.size()<3){
            return 0;
        }
        for(int i=1;i<arr.size()-1;){
            //Find a peak
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                cout<<arr[i]<<endl;
                int j=i;
                ctr=1;
                cout<<ctr<<endl;
                while(j>0 && arr[j]>arr[j-1]){
                    ctr++;
                    j--;
                    // cout<<ctr<<" : "<<arr[j]<<" : "<<j<<endl;
                }
                // cout<<ctr<<endl;
                while(i<arr.size()-1 && arr[i]>arr[i+1]){
                    ctr++;
                    i++;
                    // cout<<ctr<<" : "<<arr[k]<<" : "<<k<<endl;
                }
                // cout<<ctr;
                large=max(ctr,large);
            }else{
                i++;
            }
        }
        return large;        
    }
};
// @lc code=end

