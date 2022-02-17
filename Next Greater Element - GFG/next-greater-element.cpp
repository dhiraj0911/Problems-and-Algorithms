// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>v(n);
        stack<long long>s;
        s.push(n-1);
        // int res[n];
        // res[n-1]=-1;
        // v.push_back(-1);
        v[n-1]=-1;
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && arr[s.top()]<=arr[i])
            {
                s.pop();
            }
            v[i]=(s.empty()==true)?-1:arr[s.top()];
            // v.push_back(ng);
            // res[i]=ng;
            s.push(i);
        }
        // vector<long long>res;
        // for(int i=0;i<n;i++)
        // {
        //     v[i]=res[n-1-i];
        // }
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends