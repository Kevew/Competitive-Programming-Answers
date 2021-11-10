#include <bits/stdc++.h>
using namespace std;

int main(){
	long long q;
	cin >> q;
	int f;
	multiset<long long> curr;
	long long deduction = 0;
	while(q--){
		cin >> f;
		if(f == 1){
			long long a;
			cin >> a;
			curr.insert(a-deduction);
		}else if(f == 2){
			long long a;
			cin >> a;
			deduction += a;
		}else{
			long long ans = *curr.begin();
			curr.erase(curr.begin());
			cout << ans+deduction << endl;
		}
	}
}
