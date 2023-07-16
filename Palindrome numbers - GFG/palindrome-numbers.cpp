//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPallindrome(long long int n){
        // code here
        
        string b;
        
        while(n)
        {
            int num = n%2;
            b+=to_string(num);
            n=n/2;
        }
        
        string s = b;
        
        reverse(b.begin(),b.end());
        
        if(s==b)
        return 1;
        else
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.isPallindrome(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends