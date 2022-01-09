// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string result;
        stack<int> temp;
        int num=1;
        for(int i=0;i<S.size();i++){
            if(S[i]=='D'){
                temp.push(num);
                num++;
            }
            else{
                temp.push(num);
                num++;
                while(!temp.empty()){
                    result = result + to_string(temp.top());
                    temp.pop();
                }
            }
        }
        temp.push(num);
         while(!temp.empty()){
            result = result + to_string(temp.top());
                    temp.pop(); 
         }
        return result;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
