class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> b(m, vector<int>(n,0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int amt = checkAdj(board, i, j, m, n);
                if (amt < 2) b[i][j] = 0;
                else if (board[i][j] && (amt == 2 || amt == 3)) b[i][j] = 1;
                else if (amt > 3) b[i][j] = 0;
                else if (!board[i][j] && amt == 3) b[i][j] = 1;
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = b[i][j];
            }
        }
    }
    int checkAdj(vector<vector<int>>& board, int i, int j, int m, int n) {
        int ret = 0;
        if (i > 0) ret += board[i-1][j];
        if (i < m-1) ret += board[i+1][j];
        if (j > 0) ret += board[i][j-1];
        if (j < n-1) ret += board[i][j+1];
        if (i > 0 && j > 0) ret += board[i-1][j-1];
        if (i < m-1 && j > 0) ret += board[i+1][j-1];
        if (i > 0 && j < n-1) ret += board[i-1][j+1];
        if (i < m-1 && j < n-1) ret += board[i+1][j+1];
        return ret;
    }
};