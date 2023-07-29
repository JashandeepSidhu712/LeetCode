//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int arr[], int n)
{
  //Your code here
  
        int sum=0, left=0;
        
        for(int i=0;i<n;i++)
        sum+=arr[i];
    
        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
            
            if(sum==left)
            return i;
            
            left+=arr[i];
            
        }
    
        return -1;
}