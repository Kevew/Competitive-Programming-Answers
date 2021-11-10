#include <bits/stdc++.h>
using namespace std;

int arr[400010];

int smallestgcd;

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

void solve(){
	int n;
	cin >> n;
	bool check = false;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		arr[n+i] = arr[i];
		if(i == 0){
			smallestgcd = arr[i];
		}else{
			if(smallestgcd != 1){
				smallestgcd = gcd(smallestgcd,arr[i]);
			}
		}
		if(i > 0 && arr[i-1] != arr[i]){
			check = true;
		}
	}
	if(!check){
		cout << "0" << endl;
		return;
	}
	int curr,test = 0,j = 0;
	int ans = 0;
	for(int i = 0;i < n;i++){
		curr = arr[i]/smallestgcd,test = 0,j = i+1;
		while(curr != 1){
			test++;
			curr = gcd(curr,arr[j]/smallestgcd);
			j++;
		}
		ans = max(ans,test);
	}
	cout << ans << endl;
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
