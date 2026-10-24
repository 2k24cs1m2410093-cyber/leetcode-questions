class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        // Step 1: Count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Store elements and frequencies
        vector<pair<char, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Step 3: Sort by frequency (descending)
        sort(arr.begin(), arr.end(),
            [](pair<char, int>& a, pair<char, int>& b) {
                return a.second > b.second;
            });
         // Step 4: Build the answer
        string ans = "";

        for (auto it : arr) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};