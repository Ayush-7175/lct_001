class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> res;
        int current= lower;

        for (int x : nums) {
            if (x < current) continue;
            if (x > upper) break;
            if (x > current)
                res.push_back({current, x - 1});
            current = x + 1;
        }

        if (current <= upper)
            res.push_back({current, upper});

        return res;
    }
};