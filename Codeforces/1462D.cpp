#include <bits/stdc++.h>
using namespace std;

int arr[100010];

void solve(){
	int n;
	cin >> n;
	int total = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		total += arr[i];
	}
	
	for(int i = n;i >= 1;i--){
		if(total%i == 0){
			int each = total/i;
			int curr = 0;
			bool flag = true;
			for(int j = 0;j < n;j++){
				curr += arr[j];
				if(curr > each){
					flag = false;
					break;
				}else if(curr == each){
					curr = 0;
				}
			}
			if(flag){
				cout << n-i << endl;
				return;
			}
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
