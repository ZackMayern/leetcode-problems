/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> v;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if((nums[i]+nums[j])==target){
        //             v.push_back(i);
        //             v.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return v;

        vector<int> mp, v;
        mp = nums;
        int count = 0;
    
        for(int i=0; i<nums.size(); i++){
            int num = target-nums[i];
            for(int j=0; j<nums.size(); j++){
                if(mp[j]==num && j!=i){
                    v.push_back(j);
                    count++;
                }
            }
            if(count==2)
                break;
        }
        return v;
    }
};
// @lc code=end

