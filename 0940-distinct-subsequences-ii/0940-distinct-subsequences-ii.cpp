
class Solution {
public:
    int distinctSubseqII(string s) {

        const int MOD = 1e9 + 7;

        vector<long long> last(26, 0);

        long long dp = 1;

        for (char ch : s) {

            long long new_dp = (2 * dp) % MOD;

            new_dp = (new_dp - last[ch - 'a'] + MOD) % MOD;

            last[ch - 'a'] = dp;

            dp = new_dp;
        }

        return (dp - 1 + MOD) % MOD;
    }
};
