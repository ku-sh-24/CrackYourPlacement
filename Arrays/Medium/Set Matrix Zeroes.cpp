class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        // appraoch 1 using extra space
        // vector<int> cols;
        // vector<int> rows;
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j] == 0){
        //             cout<<"This is the row: "<<i<<endl;
        //             rows.push_back(i);
        //             cols.push_back(j);
        //         }
        //     }
        // }
        
        // for(int k=0;k<rows.size();k++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         matrix[rows[k]][j] =0;
        //     }
        // }
        // for(int k=0;k<cols.size();k++){
        //     for(int i=0;i<matrix.size();i++){
        //         matrix[i][cols[k]] =0;
        //     }
        // }

        // appraoch 2 more time and space efficient appraoch
        bool first = false, first_2 = false;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0)
                {
                    matrix[i][0]= 0;
                    matrix[0][j] = 0;
                    if(i==0) first=true;
                    if(j==0) first_2=true;

                }
            }
        }
        for(int i=1;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j]=0;
                }
            }
        }
        if(first){
            for(int k=0;k<matrix[0].size();k++){
                matrix[0][k] =0;
            }
        }
        if(first_2){
            for(int k=0;k<matrix.size();k++){
                matrix[k][0] =0;
            }
        }
    }
};
