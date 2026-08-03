class Solution {
public:
    // direction vectors
    // up, down, left, right
    int r[4] = {-1, 1, 0, 0};
    int c[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int m, int n){
        if(i < 0 || i >= m || j < 0 || j >= n){
            return false;
        }
        return true;
    }

    void dfs(vector<vector<char>>& grid, int m, int n, int i, int j, vector<vector<bool>> &vis){
        vis[i][j] = 1;

        // now we need to explore this one in all 4 directions
        for(int k =0; k<4; k++){
            int row = i + r[k];
            int col = j + c[k];

            if(valid(row, col, m, n) && grid[row][col] == '1' && !vis[row][col]){
                dfs(grid, m, n, row, col, vis);
            }
        }
        
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(grid, m, n, i, j, vis);
                    ans++;
                }

            }
        }

        return ans;
        
    
        
    }
};