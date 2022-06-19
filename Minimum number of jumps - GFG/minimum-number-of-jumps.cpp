// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // int count = 0, pos = 0;
        // for(int i = 0; i < n; i+=pos){
        //     pos += arr[i];
        //     count++;
        // }
        // return count;
        
        // int count = 0, maxRange = 0, steps = 0;
        // for(int i = 0; i < n-1; i++){
        //     maxRange = max(maxRange, arr[i]+1);
        //     if(i == steps){
        //         steps = maxRange;
        //         count++;
        //     }
        // }
        // if(steps < n-1){
        //     return -1;
        // }
        // return count;
        int jumps = 0, maxi = 0, cur = 0;
       for(int i=0; i<n-1; i++) {
           maxi = max(maxi, arr[i] + i);
           if(i == cur) {
               cur = maxi; 
               jumps++;
           }
       }
       if(cur < n-1) {
           return -1;
       }
       return jumps;
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends