// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        // for(int i = 0; i< n; i++){
        //     long long l_sum = 0;
        //     long long r_sum = 0;
        //     for(int j = 0; j< i; j++){
        //         l_sum += a[j];
        //     }
        //     for(int j = i+1; j< n; j++){
        //         r_sum += a[j];
        //     }
        //     if(l_sum == r_sum){
        //         return i+1;
        //     }
        // }
        // return -1;
        long long sum[n];
        long long summ = 0;
        for(int i = 0; i<n; i++){
            summ += a[i];
            sum[i] = summ;
        }
        int lsum, rsum = 0;
        for(int i = 0; i < n; i++){
            lsum = sum[i] - a[i];
            rsum = summ - sum[i];
            if(lsum == rsum){
                return i+1;
            }
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends