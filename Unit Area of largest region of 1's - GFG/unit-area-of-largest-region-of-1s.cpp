// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    void counter(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& visited, int &length){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || visited[i][j] == true || grid[i][j] == 0){
            return;
        }
        length++;
        visited[i][j] = true;
        counter(i, j+1, grid, visited, length);
        counter(i, j-1, grid, visited, length);
        counter(i+1, j, grid, visited, length);
        counter(i-1, j, grid, visited, length);
        counter(i+1, j+1, grid, visited, length);
        counter(i+1, j-1, grid, visited, length);
        counter(i-1, j+1, grid, visited, length);
        counter(i-1, j-1, grid, visited, length);
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        int length = 0;
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && visited[i][j] == false){
                  counter(i, j, grid, visited, length);
                  ans = max(ans, length);
                  length = 0;
                }
            }
        }
        return ans;
    }
    
//     void dfs(int i,int j,int row,int col,vector<vector<int>>& grid,vector<vector<bool>>&visited,int &length){
//       if(i<0 || i>=row || j<0 || j>=col || visited[i][j]==true || grid[i][j]==0)
//       return;
       
//       length++;
//       visited[i][j]=true;
       
//                   dfs(i-1,j,row,col,grid,visited,length);
//                   dfs(i+1,j,row,col,grid,visited,length); 
//                   dfs(i,j+1,row,col,grid,visited,length);
//                   dfs(i,j-1,row,col,grid,visited,length);
//                   dfs(i+1,j+1,row,col,grid,visited,length);
//                   dfs(i+1,j-1,row,col,grid,visited,length);
//                   dfs(i-1,j-1,row,col,grid,visited,length);
//                   dfs(i-1,j+1,row,col,grid,visited,length);
       
//   }
//   //Function to find unit area of the largest region of 1s.
//   int findMaxArea(vector<vector<int>>& grid) {
//       // Code here
//       int row=grid.size();
//       int col=grid[0].size();
//       vector<vector<bool>>visited(row,vector<bool>(col,false));
//       int ans=0;
//       int length=0;
//       for(int i=0;i<row;i++){
//           for(int j=0;j<col;j++){
//               if(visited[i][j]==false && grid[i][j]==1){
//                   dfs(i,j,row,col,grid,visited,length);
//                   ans=max(ans,length);
//                   length=0;
//               }
//           }
//       }
//       return ans;
//   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends