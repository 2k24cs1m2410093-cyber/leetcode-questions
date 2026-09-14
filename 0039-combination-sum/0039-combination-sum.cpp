class Solution {
public:

    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(int start, int target, vector<int>& candidates) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);

            backtrack(i, target - candidates[i], candidates);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        backtrack(0, target, candidates);

        return ans;
    }
};