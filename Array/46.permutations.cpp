/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void permutation(vector<int>& temp, vector<int>& nums, vector<vector<int>>& result, vector<int>& freq){
        if(temp.size()==nums.size()){
            result.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){
                temp.push_back(nums[i]);
                freq[i]=1;
                permutation(temp, nums, result, freq);
                freq[i]=0;
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp, freq(nums.size(), 0);
        permutation(temp, nums, result, freq);
        return result;
    }
};
// @lc code=end

