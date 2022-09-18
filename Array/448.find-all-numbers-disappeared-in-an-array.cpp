/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing(pow(10,5),0), result;

        for(auto x:nums)
            missing[x]++;
        
        for(int i=1; i<=nums.size(); i++){
            if(missing[i]==0)
                result.push_back(i);
        }
        return result;
    }
};
// @lc code=end

