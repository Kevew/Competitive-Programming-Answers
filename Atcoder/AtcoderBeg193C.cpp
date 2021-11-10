#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	set<long long> ans;
	for(long long i = 2;i*i <= n;i++){
		long long curr = i*i;
		while(curr <= n){
			ans.insert(curr);
			curr *= i;
		}
	}
	cout << n-ans.size() << endl;
}
