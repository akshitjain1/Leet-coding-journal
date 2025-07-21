class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        if(grid[0][0] == 1 || grid[r-1][c-1] == 1)
            return -1;
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1;  // We will use the grid to store distances
        
        // All 8 possible directions (including diagonals)
        vector<int> dx = {0, 0, 1, -1, 1, 1, -1, -1};
        vector<int> dy = {1, -1, 0, 0, 1, -1, 1, -1};
        
        while(!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            int dist = grid[x][y];
            
            if(x == r - 1 && y == c - 1)
                return dist;
            
            for(int i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx >= 0 && ny >= 0 && nx < r && ny < c && grid[nx][ny] == 0) {
                    grid[nx][ny] = dist + 1;
                    q.push({nx, ny});
                }
            }
        }
        
        return -1;
    }
};
