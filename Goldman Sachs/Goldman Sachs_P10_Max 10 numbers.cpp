#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a[10000000];
	for(int i = 0; i < 10000000; i++){
        cin>>a[i];
    }

    priority_queue<int, vector<int>, greater<int>> arr;
    for(int i = 0; i < 10; i++){
        arr.push(arr[i]);
    }

    for(int i = 10; i < 10000000; i++){
        if(arr.top() < a[i]){
            arr.pop();
            arr.push(arr[i]);
        }
    }

    while(!arr.empty()){
        cout<<arr.top()<<"\n";
        arr.pop();
    }
	return 0;
}
