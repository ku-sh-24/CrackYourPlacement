class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i-1] == nums[i]){
                continue;
            }
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum>0){
                    r--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    vector<int> ans1;
                    ans1.push_back(nums[i]);
                    ans1.push_back(nums[l]);
                    ans1.push_back(nums[r]);

                    ans.push_back(ans1);
                    l++;
                    while(nums[l]==nums[l-1] and l<r){
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};