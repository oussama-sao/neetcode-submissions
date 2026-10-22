class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i = 0;
        int j;
        unordered_set<string> row;
        unordered_set<string> col;
        unordered_set<string> sq;
        bool success = true;
        while (i < 9)
        {
            j = 0;
            while (j < 9)
            {
                if (isdigit(board[i][j]))
                {
                    success = row.insert(to_string(i) + board[i][j]).second;
                    if (!success) return false;
                    success = col.insert(to_string(j) + board[i][j]).second;
                    if (!success) return false;
                    success = sq.insert(to_string((int)(i / 3) * 3 + (j / 3)) + board[i][j]).second;
                    if (!success) return false;
                }
                j++;
            }
            i++;
        }
        return true;
    }
};
