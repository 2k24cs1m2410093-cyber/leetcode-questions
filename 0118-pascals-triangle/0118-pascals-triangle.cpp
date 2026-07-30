class Solution {
public:
    vector<int> generateRow(int row) {
        vector<int> ans;
        long long res = 1;

        ans.push_back(1); // First element

        for (int col = 1; col <= row; col++) {
            res = res * (row - col + 1) / col;
            ans.push_back(res);
        }

        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 0; row < numRows; row++) {
            ans.push_back(generateRow(row));
        }

        return ans;
    }
};