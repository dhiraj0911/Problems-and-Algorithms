// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    // void dfsR(vector<int> res[], vector<int> adj[], int s, bool visited[]){
    //     visited[s] = true;
    //     res->push_back(s);
    //     for(int i : adj[i]){
    //         if(visited[i] == false)
    //             dfsR(adj, i, visited);
    //     }
    // }
    // vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    //     bool visited[V+1];
    //     vector<int> res;
    //     for(int i = 0; i < V; i++){
    //         visited[i] = false;
    //     }
    //     dfsR(res, adj, 0, visited);
        
    // }
    
void DFS(int source ,vector<int> &ans,vector<int> &visited,vector<int> adj[]) {
      
  ans.push_back(source);
  visited[source]=1; 
     
    for(auto children : adj[source]) {
     if(visited[children]==1) continue; 
     DFS(children,ans,visited,adj);
  }  
 }


   vector<int> dfsOfGraph(int V, vector<int> adj[]) {
     vector<int> visited(V,0);
     vector<int> ans;
     DFS(0,ans,visited,adj);
     return ans;  
   }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends