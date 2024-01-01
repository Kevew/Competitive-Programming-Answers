#include <bits/stdc++.h>
using namespace std;

int arr[200010];

int newval(int x){
	return x + x%10;
}

void solve(){
	int n;
	cin >> n;
	bool flag = false;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i]%5 == 0){
			flag = true;
			arr[i] = newval(arr[i]);
		}
	}
	
	if(flag){
		if(min_element(arr,arr+n) == max_element(arr,arr+n)){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}else{
		bool flag1 = false,flag2 = false;
		for(int i = 0;i < n;i++){
			int x = arr[i];
			while(x%10 != 2){
				x = newval(x);
			}
			if(x%20 == 2){
				flag1 = true;
			}else{
				flag2 = true;
			}
		}
		if(flag1 && flag2){
			cout << "No" << endl;
		}else{
			cout << "Yes" << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
