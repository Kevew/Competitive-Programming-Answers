#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	cin >> n >> m;
	vector<long long> arr(n);
	long long cnt = 0;
	map<long long,long long> check;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		if(arr[i] != 0){
			cnt++;
		}
		check[arr[i]]++;
	}
	vector<pair<long long,long long>> temp;
	for(auto i: check){
		if(i.first == 0){
			continue;
		}
		temp.push_back({i.first,i.second});
	}
	temp.push_back({0,0});
	sort(temp.begin(),temp.end());
	long long ans = 0,ending = 0;
	for(long long i = 1;i < temp.size();i++){
		if(ans + (temp[i].first-temp[i-1].first)*cnt < m){
			ans += (temp[i].first-temp[i-1].first)*cnt;
		}else{
			m -= ans;
			long long a = m/cnt;
			ending = temp[i-1].first + a;
			cnt = m-(cnt)*a;
			break;
		}
		cnt -= temp[i].second;
	}
	
	for(long long i = 0;i < n;i++){
		if(arr[i] <= ending){
			arr[i] = 0;
		}else{
			arr[i] -= ending;
		}
	}
	
	for(long long i = 0;i < n;i++){
		if(arr[i] > 0 && cnt > 0){
			cnt--;
			arr[i]--;
		}
		cout << arr[i] << " ";
	}
	
}
