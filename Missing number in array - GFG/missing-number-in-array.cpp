// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) {
        // sort(array.begin(), array.end());
        // for(int i = 0; i < n; i++){
        //     if(i+1 != array[i]){
        //         return i+1;
        //     }
        // }
        // return -1;
        
        int a = n;
        int sum = 0;
        for(int i = 0; i < n-1; i++){
            sum += arr[i];
        }
        return (a*(a+1)/2) - sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends