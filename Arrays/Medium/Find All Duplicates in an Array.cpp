class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int , int> Map;

        for(int i=0;i<nums.size();i++){
            Map[nums[i]]++;
        } 
        for(auto i: Map){
            if(i.second >1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};