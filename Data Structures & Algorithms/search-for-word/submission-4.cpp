class Solution {
public:
    bool match(vector<vector<char>>& board, const string& word, int idx, int x, int y) {
        if (idx == word.size()) return true;
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) return false;
        if (board[x][y] != word[idx]) return false;

        char saved = board[x][y];
        board[x][y] = '#';  // mark visited in-place

        bool found = match(board, word, idx + 1, x + 1, y)
                  || match(board, word, idx + 1, x - 1, y)
                  || match(board, word, idx + 1, x, y + 1)
                  || match(board, word, idx + 1, x, y - 1);

        board[x][y] = saved; // restore
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                if (match(board, word, 0, i, j))
                    return true;
        return false;
    }
};