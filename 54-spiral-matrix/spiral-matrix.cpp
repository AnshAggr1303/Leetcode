class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();
        // Four boundaries
        int top = 0;
        int bottom = rows - 1;
        int left = 0;
        int right = cols - 1;
        while(top <= bottom && left <= right){
            // Traverse top row
            for(int j = left; j <= right; j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            // Traverse right column
            for(int i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            // Traverse bottom row (only if it still exists)
            if(top <= bottom){
                for(int j = right; j >= left; j--){
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            // Traverse left column (only if it still exists)
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};