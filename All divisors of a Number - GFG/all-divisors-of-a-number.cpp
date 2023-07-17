//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int> v;
        
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                
                if(i != (n/i))
                v.push_back(n/i);
            }
        }
        
        sort(v.begin(),v.end());
        
        for(auto i:v)
        cout<<i<<" ";
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends