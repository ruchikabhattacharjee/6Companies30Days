// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *result = new int[2];
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                result[0]=arr[i];
            }
                if(binary_search(arr, arr + n, i+1)){
                    continue;
                }
                else{
                    result[1]=i+1;
                }
        }
        return result;
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
