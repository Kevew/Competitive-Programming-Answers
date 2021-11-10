#include <bits/stdc++.h>
using namespace std;

int arr[100010],arr2[100010];
int check[100010][2];

void solve(){
	memset(arr,0,sizeof(arr));
	memset(arr2,0,sizeof(arr2));
	memset(check,0,sizeof(check));
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	sort(arr2,arr2+n);
	for(int i = 0;i < n;i++){
		check[arr2[i]][i%2]++;
	}
	for(int i = 0;i < n;i++){
		if(check[arr[i]][i%2] > 0){
			check[arr[i]][i%2]--;
		}else{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	return;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
