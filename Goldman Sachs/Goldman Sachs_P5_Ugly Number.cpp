// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   set <long long int> vec;
       vec.insert(1);
       n--;
       while(n--){
            auto it = vec.begin();
            long long int x = *it;
            vec.erase(it);
            vec.insert(x*2);
            vec.insert(x*3);
            vec.insert(x*5);
        } 
           return *vec.begin();
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
