// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid){
	    int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<int>> dist(n, vector<int> (m, INT_MAX));
	    queue< pair<int, int>> q;
	    for(int i = 0; i <  n; i++){
	        for(int j = 0; j < m; j++){
	            if(grid[i][j] == 1){
	                dist[i][j] = 0;
	                q.push({i, j});
	            }
	        }
	    }
	    while(!q.empty()){
	        int i = q.front().first;
	        int j = q.front().second;
	        q.pop();
	        if(i+1 < n && dist[i+1][j] > 1 + dist[i][j]){
	            dist[i+1][j] = 1 + dist[i][j];
	            q.push({i+1, j});
	        }
	        if( i-1 >= 0 && dist[i-1][j] > 1 + dist[i][j]){
	            dist[i-1][j] = 1 + dist[i][j];
	            q.push({i-1, j});
	        }
	        if(j+1 < m && dist[i][j+1] > 1 + dist[i][j]){
	            dist[i][j+1] = 1 + dist[i][j];
	            q.push({i, j+1});
	        }
	        if( j-1 >= 0 && dist[i][j-1] > 1 + dist[i][j]){
	            dist[i][j-1] = 1 + dist[i][j];
	            q.push({i, j-1});
	        }
	    }
	    return dist;
	}
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends