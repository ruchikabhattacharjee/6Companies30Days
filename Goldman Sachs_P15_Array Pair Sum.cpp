// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()%2!=0){
            return false;
        }
        int i,count=0;
        map<int,vector<int>> mp;
        int n = nums.size();
        for( i=0;i<n;i++){
            mp[nums[i] % k].push_back(nums[i]);
        }
        if(mp[0].size() % 2 == 0){
            count = 1;
        }
        for( i = 1; i < k/2 + 1; i++){
            if(mp[i].size() == mp[k-i].size() && i != k-i){
                count = 1;
            }
            else if( i == k-i && mp[i].size() % 2 == 0){
                count = 1;
            }
            else{
                count = 0;
                break;
            }
        }
       return count; 
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
