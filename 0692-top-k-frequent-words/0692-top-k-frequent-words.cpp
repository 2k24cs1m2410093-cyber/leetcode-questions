
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        // Step 1: Frequency count
        unordered_map<string, int> freq;

        for (string word : words) {
            freq[word]++;
        }

        // Step 2: Store word and frequency
        vector<pair<string, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.first, it.second});
        }

        // Step 3: Sort
        sort(arr.begin(), arr.end(),
            [](pair<string, int>& a, pair<string, int>& b) {

                if (a.second == b.second) {
                    return a.first < b.first;
                }

                return a.second > b.second;
            });

        // Step 4: Get top k words
        vector<string> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].first);
        }

        return result;
    }
};
