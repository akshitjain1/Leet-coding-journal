class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>> adj(numCourses);
        for(auto& pre : prerequisites){
            int u = pre[0];
            int v = pre[1];
            adj[u].push_back(v);
        }

        vector<int> indegree(n,0);
        for(int i= 0;i<n;i++){
            for(int v : adj[i]){
                indegree[v]++;
            }
        }
        queue <int> q;
        for(int i =0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node = q.front(); 
            q.pop();
            topo.push_back(node);
            for(int firstCourse : adj[node]){
                indegree[firstCourse]--;
                if(indegree[firstCourse]==0){
                    q.push(firstCourse);

                }
            }

        }
        sort(topo.begin(),topo.end());

        if(topo.size()==numCourses){
            return topo;
        }
        return {};
    }
};