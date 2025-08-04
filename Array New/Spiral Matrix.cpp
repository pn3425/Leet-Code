class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

    // TC -> O(n*m) & SC -> O(N*M)
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;

    while( top<=bottom && left<=right){ //Col & Row are still there, basically for spirals

    //Right
    for(int i=left; i<=right; i++)
    {
        ans.push_back(matrix[top][i]);
    }
    top++;

    //Bottom
    for(int i=top; i<=bottom; i++)
    {
        ans.push_back(matrix[i][right]);
    }
    right--;

    //Left
    if(top<=bottom){   //col should be there
    for(int i = right; i>=left;i--)
    {
        ans.push_back(matrix[bottom][i]);
    }
    bottom--;}

    //Top
    if(left<=right){  //
    for(int i = bottom; i>=top; i--)
      {
        ans.push_back(matrix[i][left]);
      }
    left++;
      }
    }
    return ans;   
    }
};
