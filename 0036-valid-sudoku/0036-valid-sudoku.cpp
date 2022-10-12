class Solution {
public:
   bool isValidSudoku(vector<vector<char>>& board) {
        unsigned short masks_col[9] = {};
        unsigned short masks_3x3[9] = {};
        for (size_t row = 0; row != 9; ++row) {
            unsigned short* pm = masks_3x3 + (row/3)*3;
            auto& vv = board[row];
            unsigned mask_row = 0;
            for (size_t col = 0; col != 9; ++col) {
                unsigned c = (unsigned)(vv[col] - '1');
                if (c < 9) {
                    c = (1 << c);

                    //check row
                    if (mask_row & c) return false;
                    
                    //check columns
                    auto& mask_col = masks_col[col];
                    if (mask_col & c) return false;
                    
                    //check 3x3
                    auto& mask_9 = pm[col/3];
                    if (mask_9 & c) return false;
                    
                    mask_row |= c;
                    mask_col |= c;
					mask_9 |= c;
                }
            }
        }
        
        return true;
    }
};