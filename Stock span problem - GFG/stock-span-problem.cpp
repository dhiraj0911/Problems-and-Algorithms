// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
        vector<int>v;
        stack<int>s;
        s.push(0);
        v.push_back(1);
        for(int i=1;i<n;i++){
            while(s.empty()==false && arr[s.top()]<=arr[i] ){
              s.pop();
            }
            int sp= (s.empty()) ? i+1:(i-s.top());
            s.push(i);
            v.push_back(sp);  
        }
        return v;
    }
//     vector <int> calculateSpan(int price[], int n)
//   {
//         vector<int>v;
    
//      stack<int>s;
//      s.push(0);
//      v.push_back(1);
//      for(int i=1;i<n;i++)
//      {
//          while(s.empty()==false && price[s.top()]<=price[i])
//          {
//              s.pop();
//          }
//          int ss  = (s.empty()) ? i+1 : (i-s.top());
//          s.push(i);
//          v.push_back(ss);
         
//      }
//      return v;
//   }
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends