class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if (!k)
        { return grid;
        }
        int root = grid.size(), car = grid[0].size();
        int n = root * car;

        k = k % n;
        if (!k) {return grid;}

        auto shift = [&](int i, int j) {
            while (i < j) {
                swap(grid[i / car][i % car], grid[j / car][j % car]);
                i++;
                j--;
            }
        };

        shift(0, n - 1);
        shift(0, k - 1);
        shift(k, n - 1);

        return grid;
    }
};