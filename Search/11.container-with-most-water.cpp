/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        // TLE Time Complexity O(N^2)
        // int result=0;
        // for(int left=0; left<height.size(); left++){
        //     for(int right=left+1; right<height.size(); right++){
        //         int area=(right-left)*min(height[left], height[right]);
        //         result=max(result, area);
        //     }
        // }
        // return result;
        
        // Linear Runtime
        int left=0, right=height.size()-1;
        long long result=0;
        while(left<right){
            long long area=(right-left)*min(height[left], height[right]);
            result=max(result, area);
            
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return result;
    }
};
// @lc code=end

