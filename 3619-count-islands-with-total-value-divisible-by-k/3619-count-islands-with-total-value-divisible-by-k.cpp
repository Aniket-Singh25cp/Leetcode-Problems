class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        int ans = 0;
        //Implementing BFS here for finding connected component > 0
        for(int i  = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] > 0 && !visited[i][j]){
                    long long islandSum = 0;

                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = true;

                    while(!q.empty()){
                        auto [r, c] = q.front();
                        q.pop();

                        islandSum += grid[r][c];

                        for(int i = 0; i < 4; i++){
                            int nr = r + dx[i];
                            int nc = c + dy[i];

                            if(nr >= 0 && nr < n &&
                               nc >= 0 && nc < m &&
                               grid[nr][nc] > 0 &&
                               !visited[nr][nc]){
                                visited[nr][nc] = true;
                                q.push({nr, nc});
                               }
                        }
                    }
                    if(islandSum % k == 0) ans++;
                }
            }
        }
        return ans;
    }
};