// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void counter(vector<vector<char>>& grid,int i,int j, vector<vector<bool>>& visited){
        if( i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0' || visited[i][j] == true){
            return;
        }
        visited[i][j] = true;
        counter(grid,i+1,j, visited);
        counter(grid,i,j+1, visited);
        counter(grid,i-1,j, visited);
        counter(grid,i,j-1, visited);
        counter(grid,i+1,j+1, visited);
        counter(grid,i-1,j-1, visited);
        counter(grid,i-1,j+1, visited);
        counter(grid,i+1,j-1, visited);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans= 0;
        vector<vector <bool>> visited(n, vector <bool> (m, false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(grid[i][j]=='1' && visited[i][j] == false){
                    counter(grid, i, j, visited);
                    ans++;
               }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends