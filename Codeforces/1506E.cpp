#include <bits/stdc++.h>
using namespace std;

int arr[200010];
int vis[200010];
int vis2[200010];

void solve(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> arr[i];
		vis[i] = 0;
		vis2[i] = 0;
	}
	arr[0] = 0;
	int p = 1;
	for(int i = 1;i <= n;i++){
		int a;
		if(arr[i] > arr[i-1]){
			a = arr[i];
		}else{
			while(vis[p]){
				p++;
			}
			a = p;
		}
		cout << a << " ";
		vis[a] = 1;
	}
	cout << endl;
	p = 0;
	int temp = 0;
	for(int i = 1;i <= n;i++){
		while(p < arr[i]){
			p++;
			temp++;
			vis2[temp]=p;
		}
		cout << vis2[temp] << " ";
		temp--;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
