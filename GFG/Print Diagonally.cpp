 Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		int col=0,row=0;
		while(row < N )
		{
		    if(col >= N)
		       {
		           col--;
		           row++;
		       }
		    int i=row;
		    int j=col;
		    while(j >=0  && i <N )
		    {
		        ans.push_back(A[i][j]);
		        i++; j--;
		    }
		    col++;
		    
		}
		return ans;
	}

};
