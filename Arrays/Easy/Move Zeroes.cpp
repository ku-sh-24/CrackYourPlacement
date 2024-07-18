class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_ptr=0, non_zero_ptr=0;
        while(non_zero_ptr < nums.size()){
            if(nums[non_zero_ptr] != 0){
                swap(nums[zero_ptr],nums[non_zero_ptr]);
                zero_ptr++;
                non_zero_ptr++;
            }
            else if(nums[zero_ptr] == 0 && nums[non_zero_ptr] == 0){
                non_zero_ptr++;
            }
            else{
                zero_ptr++;
            }
        }
    }
};