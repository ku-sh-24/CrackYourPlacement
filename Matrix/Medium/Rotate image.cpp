class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row_num = matrix.size();
        int col_num = matrix[0].size();

        for(int i =0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<matrix.size();i++)
        {
            int x=0,y=matrix[0].size()-1;
            while(x<y)
            {
                swap(matrix[i][x],matrix[i][y]);
                x++;
                y--;
            }
        }  
        cout<<"[";
for (int i = 0; i < row_num; i++)
  {
    cout<<"[";
    for(int j=0;j<col_num;j++)
    {
        cout<<matrix[i][j]<<",";
    }
    cout<<"],";
  }
  cout<<"]";
    }
};