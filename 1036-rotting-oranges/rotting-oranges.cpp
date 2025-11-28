class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>> dirs = {{1,0},{0,1},{-1,0},{0,-1}};
        int n = grid.size(), m = grid[0].size(), ret = 0;
        bool changed = true;
        while (changed) {
            changed = false;
            queue<pair<int,int>> q;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 2) q.push({i,j});
                }
            }
            while (!q.empty()) {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for (auto& d: dirs) {
                    if (x+d.first >= 0 && x+d.first < n && y+d.second >= 0 && y+d.second < m) {
                        if (grid[x+d.first][y+d.second] == 1) {
                            changed = true;
                            grid[x+d.first][y+d.second] = 2;
                        }
                    }
                }
            }
            if (!changed) break;
            ret++;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) return -1;
            }
        }
        return ret;
    }
};