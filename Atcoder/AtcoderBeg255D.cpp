#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin >> n >> m;
	vector<long long> arr(n);
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	long long startindiff = 0;
	for(long long i = 1;i < n;i++){
		startindiff += arr[i]-arr[0];
	}
	vector<long long> anspos;
	vector<long long> ans;
	vector<long long> prev;
	anspos.push_back(arr[0]);
	ans.push_back(startindiff);
	long long j = 1;
	while(arr[j] == arr[j-1]){
		j++;
	}
	prev.push_back(j+1);
	for(long long i = 1;i < n;i++){
		while(arr[i] == arr[i-1]){
			i++;
		}
		prev.push_back(i+1);
		startindiff += (i)*(arr[i]-arr[i-1]);
		startindiff -= (n-i)*(arr[i]-arr[i-1]);
		anspos.push_back(arr[i]);
		ans.push_back(startindiff);
	}
//	for(int i = 0;i < ans.size();i++){
//		cout << ans[i] << " " << anspos[i] << " " << prev[i] << endl;
//	}
	while(m--){
		long long a;
		cin >> a;
		if(a <= arr[0]){
			cout << ans[0]+abs(arr[0]-a)*n << endl;
			continue;
		}
		auto pos = lower_bound(anspos.begin(),anspos.end(),a+1);
		if(pos == anspos.end()){
			cout << ans[ans.size()-1] + abs(anspos[anspos.size()-1]-a)*n << endl;
		}else{
			long long newpos = pos-anspos.begin();
			newpos--;
			cout << ans[newpos] + abs(anspos[newpos]-a)*abs((prev[newpos])-(n-prev[newpos])) << endl;
		}
	}
}

