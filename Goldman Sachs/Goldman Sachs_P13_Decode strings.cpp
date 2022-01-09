// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        string res = "", temp="", temp2="", num = "";
        stack<char> st;
        int n;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }
            else if(s[i] == ']'){
                while(st.top() != '['){
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();
                
                while(isdigit(st.top())){
                    num = st.top() + num;
                    st.pop();
                    if(st.empty()){
                        break;
                    }
                }
                
                n = stoi(num);
                while(n--){
                    temp2 = temp2 + temp;
                }
                
                res = temp2;
                if(st.empty()){
                    break;
                }
                
                for(int j = 0; j < temp2.length(); j++){
                    st.push(temp2[j]);
                }
                
                temp = "";
                temp2 = "";
                num = "";
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
