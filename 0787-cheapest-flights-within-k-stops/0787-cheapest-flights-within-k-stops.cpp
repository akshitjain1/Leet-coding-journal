class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // Adjacency list with (neighbor, cost)
        vector<vector<pair<int, int>>> adj(n);
        for (auto& f : flights) {
            int u = f[0], v = f[1], cost = f[2];
            adj[u].push_back({v, cost});
        }

        // Min cost to reach each node
        vector<int> minCost(n, INT_MAX);
        minCost[src] = 0;

        // Queue for BFS: {current node, cost so far, stops used}
        queue<tuple<int, int, int>> q;
        q.push({src, 0, 0});

        while (!q.empty()) {
            auto [node, cost, stops] = q.front();
            q.pop();

            // If we exceeded the stop limit, skip
            if (stops > k) continue;

            for (auto& [next, price] : adj[node]) {
                int totalCost = cost + price;

                // If a cheaper path is found, update and continue
                if (totalCost < minCost[next]) {
                    minCost[next] = totalCost;
                    q.push({next, totalCost, stops + 1});
                }
            }
        }

        return minCost[dst] == INT_MAX ? -1 : minCost[dst];
    }
};
