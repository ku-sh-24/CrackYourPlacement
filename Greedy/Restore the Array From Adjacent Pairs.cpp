class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& Pairs) {
        // sort the pairs - NO because then the adjacent elements wont exist
        // can approach this as a graph problem
        vector<int> arr;
        unordered_map<int,vector<int>> m;
        for(auto& i: Pairs){ // we are now just figuring out adj pairs etc
            m[i][0].push_back(i[1]); 
            m[i][1].push_back(i[0]);
        }
        for(auto& i: m){
            if(i.second.size()==1){
                arr.push_back(i.first); // enter the head
                arr.push_back(i.second[0]); // ??
                break; // only putting the head
            }
        }
        while(arr.size()<Pairs.size()+1){
            
        }
        return arr;
    }
};