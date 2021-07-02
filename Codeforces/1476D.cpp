#include <bits/stdc++.h>
using namespace std;

char arr[300010];

int check[300010],scheck[300010];

void solve(){
	int n;
	cin >> n;
	check[0] = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i] == 'R'){
			if(check[i]%2 == 0){
				check[i+1] = check[i]+1;
			}else{
				check[i+1] = 1;
			}
		}else{
			if(check[i]%2 == 1){
				check[i+1] = check[i]+1;
			}else{
				check[i+1] = 0;
			}
		}
	}
	
	int curr = check[n];
	scheck[n] = curr;
	for(int i = n-1;i >= 0;i--){
		if(check[i] >= check[i+1]){
			curr = check[i];
		}
		scheck[i] = curr;
	}

	int prev = 0;
	cout << scheck[0]-check[0]+1 << " ";
	int ans = 1;
	for(int i = 1;i < n;i++){
		ans = 1;
		if(i-2 >= 0 && arr[i-1] != arr[i-2]){
			prev++;
		}else{
			prev = 1;
		}
		
		if(arr[i-1] == 'L'){
			ans += prev;
		}
		if(arr[i] == 'R'){
			ans += (scheck[i+1]-check[i+1]+1);
		}
		cout << ans << " ";
	}
	if(n-2 >= 0 && arr[n-1] != arr[n-2]){
		prev++;
	}else{
		prev = 1;
	}
	if(arr[n-1] == 'L'){
		cout << prev+1 << endl;
	}else{
		cout << "1" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
