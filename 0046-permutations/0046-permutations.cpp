class Solution {
public:

    void solve(vector<int>& nums,
               vector<int>& temp,
               vector<bool>& used,
               vector<vector<int>>& ans) {

        // Base case
        if(temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Try every number
        for(int i = 0; i < nums.size(); i++) {

            // Already used
            if(used[i])
                continue;

            // Choose
            temp.push_back(nums[i]);
            used[i] = true;

            // Explore
            solve(nums, temp, used, ans);

            // Backtrack / Undo
            temp.pop_back();
            used[i] = false;
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        solve(nums, temp, used, ans);

        return ans;
    }
};