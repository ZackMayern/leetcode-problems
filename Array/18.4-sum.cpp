/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        vector<vector<int>> result;
        if(nums.empty())
            return result;
        int n=nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long int target2=target-nums[i]-nums[j];
                int leftPointer=j+1;
                int rightPointer=n-1;

                while(leftPointer<rightPointer){
                    if(nums[leftPointer]+nums[rightPointer]<target2)
                        leftPointer++;
                    else if(nums[leftPointer]+nums[rightPointer]>target2)
                        rightPointer--;
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[leftPointer];
                        quad[3]=nums[rightPointer];
                        result.push_back(quad);

                        while(leftPointer<rightPointer && nums[leftPointer]==quad[2])
                            leftPointer++;
                        while(leftPointer<rightPointer && nums[rightPointer]==quad[3])
                            rightPointer--;
                    }
                }
                while(j<n-2 && nums[j]==nums[j+1])
                    j++;
            }
            while(i<n-3 && nums[i]==nums[i+1])
                i++;
        }
        return result;
    }
};
// @lc code=end

