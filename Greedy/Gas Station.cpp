class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // the solution wont exists if the sum(gas)< sum(cost)
        if(accumulate(gas.begin(), gas.end(), 0)< accumulate(cost.begin(), cost.end(), 0)){
            return -1;
        }
        else{
            int start=0,total_gas = 0;
            for(int i=0;i<gas.size();i++){
                total_gas = total_gas+ gas[i]-cost[i];

                if(total_gas<0){
                    total_gas =0;
                    start = i+1;
                    // if(i+1>=gas.size()){
                    //     start=0;
                    // }
                    // else{
                    //     start=i+1;
                    // }
                }
            }
            return start;
        }
    }
};

// // since if a solution exists it is always unique
        // // don't need to worry abt optimization here

        // int curr_gas = 0;
        // for(int i=0;i<gas.size();i++){
        //     if(gas[i]-cost[i]>=0){
        //         int j=i;
        //         // if(j+1>=gas.size()){
        //         //         j=0;
        //         //     }
        //         while(gas[j]-cost[j]>=0){
        //             // if(+gas[j+1]>=cost[j+1])
        //             if(j+1>=gas.size()){
        //                 j=0;
        //             }
        //             j++;
        //             if(j == i){
        //                 return i;
        //             }
        //         }
        //     }
        // }
        // return -1;