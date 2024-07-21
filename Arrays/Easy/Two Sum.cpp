class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);

        // brute force approach 
        // for(int i =0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j] == target){
        //             cout<<i<<" "<<j<<endl;
        //             ans[0] = i;
        //             ans[1] = j;
        //             break;
        //         }
        //     }
        // }

        // two pointer appraoch
        // vector<int> num = nums;
        // sort(num.begin(),num.end());
        // int i =0, j=num.size()-1;
        // while(i<j){
        //     if(num[i]+num[j]>target){
        //         j--;
        //     }
        //     else if(num[i]+num[j]<target){
        //         i++;
        //     }
        //     else if (num[i]+num[j] == target){
        //         for(int k=0;k<nums.size();k++){
        //             if(nums[k] == num[i]){
        //                 ans[0] = k;
        //             }
        //             else if(nums[k] == num[j]){
        //                 ans[1] = k;
        //             }
        //         }
        //         break;
        //     }
        // }

        // approach 3
        // using hash tables
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int x = target-nums[i];
            if (map.count(x)) {
                return {map[x], i};
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};