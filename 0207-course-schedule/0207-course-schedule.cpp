class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<vector<int>> adj(numCourses);
        for(auto& pre : prerequisites){
            int u = pre[0];
            int v = pre[1];
            adj[u].push_back(v);
        }

        vector<int> indegree(V,0);
        for(int i =0;i<V ;i++){
            for(int v : adj[i]){
                indegree[v]++;
            }
        }
        queue <int> q;
        for(int i= 0;i<V;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        vector<int> topo;
        while(!q.empty()){
            int node = q.front(); q.pop();
            topo.push_back(node);
            for (int neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0)
                    q.push(neighbor);
            }
        }
        if(topo.size() == numCourses){
            return true;
        }
        else{
            return false;
        }

    }
};