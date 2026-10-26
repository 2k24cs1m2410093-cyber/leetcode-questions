class Solution {
public:
    using p = pair<int, pair<int, int>>;

    vector<pair<int, int>> directions = {
        {1,1}, {0,1}, {1,0}, {0,-1},
        {-1,0}, {-1,-1}, {1,-1}, {-1,1}
    };

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int n = grid.size();

        if (grid[0][0] != 0 || grid[n-1][n-1] != 0)
            return -1;

        vector<vector<int>> result(n, vector<int>(n, INT_MAX));

        priority_queue<p, vector<p>, greater<p>> pq;

        result[0][0] = 1;
        pq.push({1, {0,0}});

        while (!pq.empty()) {

            int d = pq.top().first;
            auto node = pq.top().second;
            pq.pop();

            int x = node.first;
            int y = node.second;

            if (d > result[x][y])
                continue;

            if (x == n-1 && y == n-1)
                return d;

            for (auto dir : directions) {

                int x_ = x + dir.first;
                int y_ = y + dir.second;

                if (x_ >= 0 && x_ < n &&
                    y_ >= 0 && y_ < n &&
                    grid[x_][y_] == 0 &&
                    d + 1 < result[x_][y_]) {

                    result[x_][y_] = d + 1;

                    pq.push({d + 1, {x_, y_}});
                }
            }
        }

        return -1;
    }
};