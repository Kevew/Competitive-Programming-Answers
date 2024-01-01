#include <bits/stdc++.h>
using namespace std;

bool check(long long pos,long long l){
	cout << "? " << l+1 << " " << pos << endl;
	long long cnt = 0;
	for(long long i = l;i < pos;i++){
		long long a;
		cin >> a;
		if(a <= pos && a >= l+1){
			cnt++;
		}
	}
	if(cnt%2 == 0){
		return true;
	}else{
		return false;
	}
}
void solve(){
	long long n;
	cin >> n;
	long long l = 0,r = n;
	while(l < r){
		long long mid = l+(r-l+1)/2;
		if(check(mid,l)){
			l = mid;
		}else{
			r = mid-1;
		}
	}
	cout << "! " << l+1 << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}

/*
4,2,5,1,3
*/
