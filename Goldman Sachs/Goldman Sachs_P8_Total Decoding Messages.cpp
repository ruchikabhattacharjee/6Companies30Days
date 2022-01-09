// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int mod = 1e9+7;
		    if(str[0] == '0'){
		        return 0;
		    }
		    if(str.length() == 1){
		        return 1;
		    }
		    
		    if(str[str.length() - 1] == '0' && str[str.length() - 2] >= '3'){
		        return 0;
		    }
		    
		    int a[str.length()+1];
		    a[0] = 1;
		    a[1] = 1;
		    int i;
		    for(i = 2; i <= str.length(); i++){
		        a[i] = 0;
		        
		        if(str[i-1] >= '1'){
		            a[i] = a[i - 1];
		        }
		        
		        if(str[i-2] == '1' || (str[i-2] == '2' && str[i-1] <= '6')){
		            a[i] = (a[i] + a[i-2]) % mod;
		        }
		    }
		    
		    return a[str.length()];
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
