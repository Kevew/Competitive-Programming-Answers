#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	sort(arr,arr+4);
	int ans = 0;
	for(int i = 0;i < 2;i++){
		if(arr[i]+arr[i+1] > arr[i+2]){
			ans = 2;
		}
		if(arr[i]+arr[i+1] == arr[i+2]){
			ans = max(ans,1);
		}
	}
	if(ans == 2){
		cout << "TRIANGLE" << endl;
	}else if(ans == 1){
		cout << "SEGMENT" << endl;
	}else{
		cout << "IMPOSSIBLE" << endl;
	}
}
