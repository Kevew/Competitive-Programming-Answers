#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,q;
	cin >> n >> q;
	long long test,x;
	set<long long> cut;
	cut.insert(n);
	cut.insert(0);
	for(long long i = 0;i < q;i++){
		cin >> test >> x;
		if(test == 1){
			cut.insert(x);
		}else{
			auto j = cut.lower_bound(x);
			auto a = prev(j);
			long long f = *j;
			long long s = *a;
			cout << f-s << endl;
		}
	}
}
