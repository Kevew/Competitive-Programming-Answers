#include <bits/stdc++.h>
using namespace std;

int arr[110];

int main(){
	int N;
	cin >> N;
	int longest = 0,curr = 1;
	for(int i = 0;i < N;i++){
		cin >> arr[i];
	}
	for(int i = 1;i < N;i++){
		if(abs(arr[i]-arr[i-1]) <= 2){
			curr++;
		}else{
			longest = max(longest,curr);
			curr = 1;
		}
	}
	if(curr != 1){
		longest = max(longest,curr);
	}
	cout << longest << endl;
}
