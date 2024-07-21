class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // traversing the array once
        int result=0;
        int sum =0;
        unordered_map<int,int> map;
        map[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(map.find(sum-k)!=map.end()){
                result += map[sum-k];
            }
            map[sum]++;
        }
        return result;
    }
};