#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+1;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	map<int,int> pos;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		pos[temp] = i;
	}
	
	vector<pair<int,int>> check;
	for(int i = 0;i < n;i++){
		for(int j = arr[i];j <= n;j += arr[i]){
			check.push_back({i,pos[j]});
		}
	}
	
	sort(check.begin(), check.end(), [&](pair<int, int> i, pair<int, int> j) { return i.first != j.first ? i.first < j.first : i.second > j.second; });
	
	
	vector<int> seq(n, INF);
	for (pair<int, int> i : check) {
		int ptr = lower_bound(seq.begin(), seq.end(), i.second) - seq.begin();
		seq[ptr] = i.second;
	}
	int ans = lower_bound(seq.begin(), seq.end(), INF) - seq.begin();
	cout << ans << endl;
}
