/*
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
 
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowsum=0;
        double maxsum=INT_MIN;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        maxsum=windowsum/k;
        for(int i=k;i<nums.size();i++){
           
         windowsum+=nums[i]-nums[i-k];
         maxsum = max(maxsum,windowsum/k);
        }
        return maxsum;
    }
};
