class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int fresh = 0;
        queue<pair<int, int>> q;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1) {
                    fresh++;
                } else if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        if (fresh == 0) return 0;

        vector<int> dx = {0, 0, 1, -1};
        vector<int> dy = {1, -1, 0, 0};
        int minutes = 0;

        while (!q.empty()) {
            int size = q.size();
            bool changed = false;

            for (int i = 0; i < size; i++) {
                auto node = q.front(); q.pop();
                int x = node.first;
                int y = node.second;

                for (int j = 0; j < 4; j++) {
                    int nx = x + dx[j];
                    int ny = y + dy[j];
                    if (nx >= 0 && ny >= 0 && nx < r && ny < c && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;
                        fresh--;
                        q.push({nx, ny});
                        changed = true;
                    }
                }
            }

            if (changed) minutes++;
        }

        return fresh == 0 ? minutes : -1;
    }
};
