class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Idea is to add every increase to out total sum
        
        // first check is sorted ascending or descending

        // if not sorted either ways then solve
        int mini=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                mini += prices[i]-prices[i-1];
            }
        }
        return mini;
    }
};