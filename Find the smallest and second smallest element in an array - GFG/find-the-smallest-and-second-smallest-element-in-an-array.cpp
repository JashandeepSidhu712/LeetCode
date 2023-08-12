//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    
    vector<int>v;
    
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]>smallest && a[i]<ssmallest)
        {
            ssmallest = a[i];
        }
    }
    
    if(smallest!=INT_MAX && ssmallest!=INT_MAX)
    {
        v.push_back(smallest);
        v.push_back(ssmallest);
    }
    
    
    if(v.empty())
    return {-1};
    else
    return v;
    
}