#include <bits/stdc++.h>
using namespace std;

int arr[310];
int occur[3000010];
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,w;
	cin >> n >> w;
	memset(occur,0,sizeof(occur));
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(arr[i] <= w){
			occur[arr[i]] = 1;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			if(arr[i]+arr[j] <= w){
				occur[arr[i]+arr[j]] = 1;
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			for(int x = j+1;x < n;x++){
				if(arr[i]+arr[j]+arr[x] <= w){
					occur[arr[i]+arr[j]+arr[x]] = 1;
				}
			}
		}
	}
	for(int i = 0;i <= 3000000;i++){
		if(occur[i] > 0){
			ans++;
		}
	}
	cout << ans << endl;
}
