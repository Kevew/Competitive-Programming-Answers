#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int longestlength = 0;
	int currL = 1;
	for(int i = 1;i < n;i++){
		if(arr[i]-arr[i-1] > k){
			longestlength = max(longestlength, currL);
			currL = 1;
		}else{
			currL++;
		}
	}
	longestlength = max(longestlength, currL);
	cout << n-longestlength << endl; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
