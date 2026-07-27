// TC: O(8^(n*n))
// SC: O(n*n)
class Solution {
public:
    bool solution(vector<vector<int>>& grid, int number, int i, int j, int n) {

        if (i < 0 || j < 0 || i >= n || j >= n) {
            return false;
        }

        if (grid[i][j] != number) {
            return false;
        }

        if (number == n * n - 1) {
            return true;
        }

        return solution(grid, number + 1, i - 2, j + 1, n) ||
               solution(grid, number + 1, i - 1, j + 2, n) ||
               solution(grid, number + 1, i + 1, j + 2, n) ||
               solution(grid, number + 1, i + 2, j + 1, n) ||
               solution(grid, number + 1, i + 2, j - 1, n) ||
               solution(grid, number + 1, i + 1, j - 2, n) ||
               solution(grid, number + 1, i - 1, j - 2, n) ||
               solution(grid, number + 1, i - 2, j - 1, n);
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();

        return solution(grid, 0, 0, 0, n);
    }
};
