// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool counter(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &visited){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0 || visited[i][j] == true){
            return false;
        }
        if(grid[i][j]==2)
        {
            return true;
        }
        visited[i][j] = true;
        bool a = counter(i, j+1, grid, visited);
        bool b = counter(i, j-1, grid, visited);
        bool c = counter(i+1, j, grid, visited);
        bool d = counter(i-1, j, grid, visited);
        return a || b || c || d;
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool> (n, false));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    return counter(i, j, grid, visited);
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends