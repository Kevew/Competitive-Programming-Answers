#include <bits/stdc++.h>
using namespace std;

map<long long,long long> ver;
map<long long,long long> hor;

map<long long,long long> NW;
map<long long,long long> SW;

void solve(){
	ver.clear();
	hor.clear();
	NW.clear();
	SW.clear();
	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i = 0;i < n;i++){
		long long a,b;
		cin >> a >> b;
		ans += ver[a];
		ans += hor[b];
		
		long long c = b-a;
		ans += SW[c];
		
		long long d = b+a;
		ans += NW[d];
		
		SW[c]++;
		NW[d]++;
		ver[a]++;
		hor[b]++;
	}
	cout << ans*2 << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
