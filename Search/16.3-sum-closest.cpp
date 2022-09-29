/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int result;

        int sum=nums[0]+nums[1]+nums[2];
        for(int index=0; index<nums.size()-2; index++){
            int left=index+1, right=nums.size()-1;
            while(left<right){
                int temp=nums[index]+nums[left]+nums[right];
                if(abs(temp-target) < abs(sum-target))
                    sum=temp;
                else if(temp>target)
                    right--;
                else if(temp<target)
                    left++;
                else
                    return target;
            }
        }
        return sum;
    }
};
// @lc code=end

