//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 

    void solve(int i, vector<int> &v)
    {
        int cnt=0;
        
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
                
                if(i/j!=j)
                cnt++;
            }
        }
        
        if(cnt==2)
        v.push_back(i);
    }
    long long int largestPrimeFactor(int N){
        // code here
        
        vector<int> v;
        
        for(int i=1;i*i<=(N);i++)
        {
            if(N%i==0)
            {
                solve(i,v);
                
                if(N/i!=i)
                solve(N/i,v);
            }
        }
        
        return v[v.size()-1];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends