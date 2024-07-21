class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        // to store the answer

        int row_num = matrix.size();
        int col_num = matrix[0].size();
        // the size of the rows and cols

        int count =0;
        int num_of_nums = row_num * col_num;
        // total number of elements we need to traverse

        int start_row =0;
        int start_col = 0;
        int ending_row = row_num-1;
        int ending_col = col_num-1;

        while(count < num_of_nums){
            // printing starting row:
            for(int index = start_col;count < num_of_nums && index <= ending_col; index++){
                ans.push_back(matrix[start_row][index]);
                count++;
            }
            start_row++;
            // print the ending col
            for(int index = start_row; count < num_of_nums && index<=ending_row;index++){
                ans.push_back(matrix[index][ending_col]);
                count++;
            }
            ending_col--;
            // print the ending row
            for(int index = ending_col; count < num_of_nums && index>=start_col; index--){
                ans.push_back(matrix[ending_row][index]);
                count++;
            }
            ending_row--;
            // print the starting col
            for(int index = ending_row; count < num_of_nums && index>=start_row;index--){
                ans.push_back(matrix[index][start_col]);
                count++;
            }
            start_col++;

        }
        return ans;
    }
};