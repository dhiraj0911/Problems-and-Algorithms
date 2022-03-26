// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue< pair <int, int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
            }
        }
        q.push({-1, -1});
        int count = 0;
        while(q.size() != 0){
            int a = q.front().first;
            int b = q.front().second;
            
            
            if(a != -1 && b!= -1){
                if(b+1 <= m-1 and grid[a][b+1] == 1){
                    grid[a][b+1] = 2;
                    q.push({a, b+1});
                }
                if(b-1 >= 0 and grid[a][b-1] == 1){
                    grid[a][b-1] = 2;
                    q.push({a, b-1});
                    }
                if(a+1 <= n-1 and grid[a+1][b] == 1){
                    grid[a+1][b] = 2;
                    q.push({a+1, b});
                }
                if(a-1 >= 0 and grid[a-1][b] == 1){
                    grid[a-1][b] = 2;
                    q.push({a-1, b});
                }
                q.pop();
            }
            else if(a == -1 && b == -1 && q.size() == 1){
                q.pop();
                break;
            }
            else if(a == -1 && b == -1 && q.size() > 1){
                q.pop();
                q.push({-1, -1});
                count++;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return count;
    }
//     int orangesRotting(vector<vector<int>>& grid) {
//         int cnt = 0;
        
//       int row = grid.size();
//       int col = grid[0].size();
       
//       queue<pair<int,int>> q;
       
//       for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//       if(grid[i][j]==2){
//         q.push({i,j});
//       }
//       }
//       }
       
//       q.push({-1,-1});  
       
//       while(q.size()!=0){
//         int a = q.front().first;
//         int b = q.front().second;
//         if(a!=-1 and b!=-1){
//          if( b+1 <= col-1  && grid[a][b+1]==1) {
//           grid[a][b+1] = 2;
//           q.push({a,b+1});
//          }
//          if(a+1 <= row-1 && grid[a+1][b]==1){
//             grid[a+1][b]=2;
//             q.push({a+1,b});
//          }
//          if(b-1>=0 and grid[a][b-1]==1){
//             grid[a][b-1]=2;
//             q.push({a,b-1});
//          }
//          if(a-1>=0 and grid[a-1][b]==1){
//             grid[a-1][b]=2;
//             q.push({a-1,b});
//          }
//          q.pop();
//         } else if (a==-1 and b==-1 and q.size() == 1){
//           q.pop();
//           break;
//         } else if (a==-1 and b==-1 and q.size() > 1){
//           q.pop();
//           q.push({-1,-1});
//           cnt++;
//         }
//       }
       
//       for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//       if(grid[i][j]==1){
//         return -1;
//       }
//       }
//       }
       
//       return cnt;
       
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends