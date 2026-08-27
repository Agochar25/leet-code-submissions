class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>rows(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>>boxes(9);
        for(int row = 0; row<9;row++){
            for(int col = 0; col<9;col++){
                if(board[row][col]=='.'){
                    continue;
                }
                char num = board[row][col];
                int box  = (row/3)* 3 +(col/3);
                if(rows[row].count(num)||
                cols[col].count(num)||
                boxes[box].count(num)){
                    return false;
                }
                rows[row].insert(num);
                cols[col].insert(num);
                boxes[box].insert(num);

            }
            
        }
        return true;
        
    }
};
