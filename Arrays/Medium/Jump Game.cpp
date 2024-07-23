class Solution {
public:
    bool canJump(vector<int>& nums) {
        int num=nums.size()-2;
        int target = nums.size()-1;
        while(num>-1){
            if(num+nums[num]>=target){
                target = num;
            }
            num--;
        }
        if(target == 0){
            return true;
        }
        else{
            return false;
        }
    }
};