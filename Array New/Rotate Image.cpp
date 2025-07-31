class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        	//Transposing :   TC -> O(n/2 * n/2)
	int n = matrix.size();
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}

	//Reversing : TC -> O(n (Traverse) * n/2(Rev))

	for(int i=0;i<n;i++)
	{
		reverse(matrix[i].begin(), matrix[i].end());
	}
        
    }
};
