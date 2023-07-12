//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	     // code here
        for(int i=n;i>0;i--)
        {
            for(int k=i;k<n;k++)
            {
                cout<<" ";
            }
            int s = 2*i-1;
            for(int j=1;j<=s;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends