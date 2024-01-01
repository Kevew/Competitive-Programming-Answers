#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	int cnt = (sum+1)/2;
	int m = 0;
	for(m = 0;m < n;m++){
		if(cnt > arr[m]){
			cnt -= arr[m];
		}else{
			break;
		}
	}
	cout << m+1 << " " << cnt << endl;
}
