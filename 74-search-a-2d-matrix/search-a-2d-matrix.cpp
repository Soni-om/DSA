class Solution {
public:
    bool search(vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();
        int st = 0;
        int end = n -1;

        while (st <= end) {
         int  mid = st + (end - st)/2;
            if (target == mat[row][mid]) {
                return true;
            } else if (target > mat[row][mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m = mat.size();
        int n = mat[0].size();

        int srow = 0;
        int erow = m - 1;
        while (srow <= erow) {

            int mid = srow +(erow - srow)/2;

            if (mat[mid][0] <= target && target <=mat[mid][n - 1]) {
                return search(mat,  target,  mid);
            } else if (target >= mat[mid][n-1]) {
                srow = mid + 1;
            } else {
                erow = mid - 1;
            }

           // return false;
        }
        return false;
    }
};