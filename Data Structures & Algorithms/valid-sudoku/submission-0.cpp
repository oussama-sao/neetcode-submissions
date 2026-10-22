class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i = 0;
        int j;
        set<pair<int, int>> row;
        set<pair<int, int>> col;
        set<pair<int, int>> sq;
        bool success = true;
        while (i < 9)
        {
            j = 0;
            while (j < 9)
            {
                if (std::isdigit(board[i][j]))
                {
                    success = row.insert({i, board[i][j]}).second;
                    if (!success) return false;
                    success = col.insert({j, board[i][j]}).second;
                    if (!success) return false;
                    success = sq.insert({(int)(i / 3) * 3 + (j / 3), board[i][j]}).second;
                    if (!success) return false;
                }
                j++;
            }
            i++;
        }
        return true;
    }
};
