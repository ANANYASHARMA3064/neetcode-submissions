class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p1 = 0;
        int p2 = matrix.size() - 1;

        while (p1 <= p2) {
            int mid = (p1 + p2) / 2;

            int first = matrix[mid][0];
            int last = matrix[mid][matrix[mid].size() - 1];

            if (first <= target && last >= target) {

                int l = 0;
                int r = matrix[mid].size() - 1;

                while (l <= r) {
                    int midt = (l + r) / 2;

                    if (matrix[mid][midt] == target) {
                        return true;
                    }
                    else if (matrix[mid][midt] < target) {
                        l = midt + 1;
                    }
                    else {
                        r = midt - 1;
                    }
                }

                return false;
            }
            else if (first > target) {
                p2 = mid - 1;
            }
            else {
                p1 = mid + 1;
            }
        }

        return false;
    }
};