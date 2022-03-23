// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    // bool DFSR(vector<int> adj[],int s,vector<int> &visited,vector<int> &status){
    //     visited[s]=true;
    //     status[s]=true;
    //     for(auto x:adj[s]){
    //         if(visited[x]==false && DFSR(adj,x,visited,status)){
    //             return true;
    //         }
    //         else if(status[x]==true){
    //             return true;
    //         }
    //     }
    //     status[s]=false;
    //     return false;
    // }

    // bool isCyclic(int V, vector<int> adj[]) {
    //     vector<int>visited(V,0);
    //     vector<int>status(V,0);
    //     for(int i=0;i<V;i++){
    //         if(visited[i]==false){
    //             if(DFSR(adj,i,visited,status))
    //                 return true;  
    //         }
    //     }
    //     return false;
    // }
    
    bool isCyclic(int V, vector<int> adj[]){
        vector<int> indegree(V,0);
        int count=0;
        queue<int> q;
        for(int i=0;i<V;i++){
            for(int x:adj[i]){
                indegree[x]++;
            }
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int x: adj[u]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
            count++;
        }
        return (count!=V);
    }
    
    
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends