#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,int> arr;

int gcd(int a,int b){
	if(b == 0){
		return a;
	}
	return gcd(b,a%b);
}

void solve(){
	arr.clear();
	int n;
	cin >> n;
	string a;
	cin >> a;
	int D = 0,K = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == 'D'){
			D++;
		}else{
			K++;
		}
		int temp = gcd(D,K);
		arr[make_pair(D/temp,K/temp)]++;
		cout << arr[make_pair(D/temp,K/temp)] << " ";
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
