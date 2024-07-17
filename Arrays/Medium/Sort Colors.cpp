/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        // approach 1
        //sort(nums.begin(),nums.end());

        // approach 2
        // int i =0, j = nums.size()-1;
        // while(i<=j){
        //     if(nums[i] < nums[j]){
        //         i++;
        //     }
        //     else if(nums[i]>nums[j]){
        //         swap(nums[i],nums[j]);
        //         j--;
        //     }
        //     else{
        //         i++;
        //         j--;
        //     }

        // prev approach failed because didn't consider 1<2

        // approach 3
        // count the number of occurances of each and rewrite the array

        // approach 4
        int mid = 0, low =0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else{
                mid++;
            }
        }
    }
};