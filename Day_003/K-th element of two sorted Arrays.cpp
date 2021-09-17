// initial approach
// Time : O(k)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int first = 0, second = 0;
        int is_arr1 = arr1[0]<arr2[0];
        int ans;
        for(int i=0;i<k;i++){
            if(first>=n) is_arr1 = false;
            else if(second>=m)  is_arr1 = true;
            else  is_arr1 = arr1[first]<arr2[second];
            
            if(is_arr1){
                ans = arr1[first];
                first ++;
            }
            else{
                ans = arr2[second];
                second++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends
