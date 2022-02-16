// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long a[], long long b[], int n, int m) 
        {
            // sort(a,a+n);
            // sort(b,b+m);
            // long long j=0;
            // while(j<m){
            //     for(long long i=j;i<n;i++){
            //         if(a[n-1]<=b[j]){
            //             break;
            //         }
            //         else if(a[i]>b[j]){
            //             swap(a[i],b[j]);
            //         }
            //     }
            //     j++;
            // }
            // sort(b,b+m);
            sort(a,a+n);
            sort(b,b+m);
            int i=0,j=0,k=n-1;
            while(i<=k &&j<m){
                if(a[i]<b[j]){
                    i++;
                }
                else{
                    swap(a[k--],b[j++]);
                }
            }
            sort(a,a+n);
            sort(b,b+m);
        }
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends