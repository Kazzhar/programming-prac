//      https://leetcode.com/problems/word-search/description/?envType=daily-question&envId=2024-04-03
//      Data Structure: vectors
//      Algorithm: backtracking, dfs

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
int m, n;
bool solve(vector<vector<char> >& board, string word, int i, int j, int pos) {
    if (pos >= word.size())
        return true;
    if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[pos])
        return false;
    char curr = board[i][j];
    board[i][j] = '\0';
    if (solve(board, word, i + 1, j, pos + 1) ||
        solve(board, word, i - 1, j, pos + 1) ||
        solve(board, word, i, j + 1, pos + 1) ||
        solve(board, word, i, j - 1, pos + 1))
        return true;
    board[i][j] = curr;
    return false;
}
int main() {
    cin >> m >> n;
    string word;
    cin >> word;
    vector<vector<char> > board(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == word[0]) {
                if (solve(board, word, i, j, 0)) {
                    cout << "true";
                    return 0;
                }
            }
        }
    }
    cout << "false";
    return 0;
}