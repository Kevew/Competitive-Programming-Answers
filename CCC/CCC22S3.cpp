#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,k;
	cin >> n >> m >> k;
	vector<long long> ans;
	long long prev = 0;
	long long curr = n;
	long long addon = 0;
	if(curr > k){
		cout << "-1" << endl;
		return 0;
	}
	for(long long i = 0;i < n;i++){
		if(curr+(addon) <= k){
			curr += addon;
			ans.push_back(prev+1);
			prev++;
			prev %= m;
			addon = min(addon+1,m-1);
		}else{
			long long temp = k-curr;
			curr = k;
			ans.push_back(ans[ans.size()-(temp+1)]);
		}
	}
	/*
	cout << curr << endl;
	for(long long i = 0;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	*/
	if(curr != k){
		cout << "-1" << endl;
	}else{
		for(long long i = 0;i < ans.size();i++){
			cout << ans[i] << " ";
		}
	}
}

//10 4 30
//1 2 3 4 1 2 3 4 1 1
