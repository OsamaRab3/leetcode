class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int row = 0, col = cols - 1;
        int negativ = 0;

        while (row < rows && col >= 0) {
            if (grid[row][col] < 0) {
                // All elements in this column below the current row are also negative
                negativ += (rows - row);
                col--; // Move left
            } else {
                row++; // Move down
            }
        }
        return negativ;
    }
};
