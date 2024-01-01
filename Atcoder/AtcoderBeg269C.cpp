#include <bits/stdc++.h>
using namespace std;

int main(){
	set<long long> ans;
	long long a;
	cin >> a;
	long long j = 1;
	for(int i = 0;i < 60;i++){
		j *= 2;
	}
	vector<long long> check;
	while(j >= 1){
		if(a-j >= 0){
			check.push_back(j);
			a -= j;
		}
		j /= 2;
	}
	long long n = pow(2,check.size());
	for(int i = 0;i < n;i++){
		long long curr = 0;
		for(int x = 0;x < check.size();x++){
			if(i&(1<<x)){
				curr += check[x];
			}
		}
		ans.insert(curr);
	}
	for(auto i: ans){
		cout << i << endl;
	}
}
