// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    int DFS(vector<int> adj[], int s, int d, int &count){
        if(s == d){
            count++;
        }
        else{
            for(auto x: adj[s]){
                DFS(adj, x, d, count);
            }
        }
        return count;
    }
    
    int countPaths(int V, vector<int> adj[], int s, int d) {
        // vector<int> visited(V, 0);
        int count = 0;
        count = DFS(adj, s, d, count);
        return count;
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
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends