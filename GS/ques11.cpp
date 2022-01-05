// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {        
        int i=0, j=n-1;
        int missing=0, dupli=0;
        
        for (i = 0; i < n; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else{
            dupli = abs(arr[i]);
            break;
        }
    }
  
    for (i = 0; i < n; i++) {
        if (arr[i] > 0){
            missing = i+1;
            break;
        }
    }
        
        int ans[2];
        ans[0]=dupli;
        ans[1] = missing;
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends