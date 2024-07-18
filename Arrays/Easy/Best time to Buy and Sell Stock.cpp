class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int overall =0 ;
        int curr_p=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini = prices[i];
            }
            curr_p = prices[i] - mini;
            if(curr_p>overall){
                overall = curr_p;
            }
        }
        return overall;
    }
};