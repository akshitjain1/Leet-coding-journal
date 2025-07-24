class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<bool> rowMarker(rows, false);
        vector<bool> colMarker(cols, false);

        // First pass to mark which rows and columns have a zero
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    rowMarker[i] = true;
                    colMarker[j] = true;
                }
            }
        }

        // Second pass to set elements to zero based on markers
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowMarker[i] || colMarker[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};