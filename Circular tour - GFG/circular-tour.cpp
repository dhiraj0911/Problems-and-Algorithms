// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    int tour(petrolPump p[],int n)
    {
        int pet = 0, index = 0, dist = 0;
        for(int i = 0; i<n; i++){
            pet += p[i].petrol;
            if(pet<p[i].distance){
                dist += p[i].distance - pet;
                pet = 0;
                index = (i+1);
            }
            else{
                pet -= p[i].distance;
            }
        }
        if(pet-dist < 0)
            return -1;
        return index;
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
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends