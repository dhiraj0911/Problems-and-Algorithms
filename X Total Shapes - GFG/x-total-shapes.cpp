// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    void counter(int i, int j, vector<vector<char>>& grid, vector<vector<bool>> &visited){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || visited[i][j] == true || grid[i][j] == 'O')
           return ;
        visited[i][j] = true;
        counter(i, j-1, grid, visited);
        counter(i, j+1, grid, visited);
        counter(i+1, j, grid, visited);
        counter(i-1, j, grid, visited);
    }
    int DFS(vector<vector<char>>& grid, vector<vector<bool>> &visited,int result, int n, int m){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 'X' && visited[i][j] == false){
                    counter(i, j, grid, visited);
                    result++;
                }
            }
        }
        return result;
    }
    
    int xShape(vector<vector<char>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool> (m, 0));
        int result = 0;
        return DFS(grid, visited, result, n, m);
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends