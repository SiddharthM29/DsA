class Solution{
   public:
  vector<int> downwardDiagonal(int N,vector<vector<int>>)
  {
    vector<int> ans;
    int row=0;
    int col=0;
     while(row < N)
     {
        if(col >= N)
        {
          col--;
          row++;
        }
       int i= row;
       int j=col;
       
       while(j>=0 && i < N)
       {
           ans.push_back(A[i][j]);
            i++; j--;
       }
       col++;
     }
    return ans;
  } 

};
