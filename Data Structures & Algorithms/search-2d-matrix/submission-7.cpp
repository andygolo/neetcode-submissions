class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int top = matrix.size() - 1; 
        int right = matrix[0].size() - 1;
        
        int row_start = 0, row_end = top;
        int target_row = -1; 

        while (row_start <= row_end) {
            int mid = row_start + (row_end - row_start) / 2;
            
            if (target >= matrix[mid][0] && target <= matrix[mid][right]) {
                target_row = mid; 
                break; 
            }
            
            if (target > matrix[mid][right]) {
                row_start = mid + 1;
            } else {
                row_end = mid - 1; 
            }
        }

        if (target_row == -1) return false;

        int left = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2; 

            if (target == matrix[target_row][mid]) return true;

            if (target > matrix[target_row][mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }
};