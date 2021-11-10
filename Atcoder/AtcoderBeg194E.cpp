#include <bits/stdc++.h>
using namespace std;

map<int,int> cnt;
int temp[1500010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	set<int> arr;
	for(int i = 0;i < 1500010;i++){
		arr.insert(i);
	}
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> temp[i];
		cnt[temp[i]]++;
		if(cnt[temp[i]] == 1){
			arr.erase(temp[i]);
		}
	}
	int ans = *arr.begin();
	for(int i = m;i < n;i++){
		cin >> temp[i];
		cnt[temp[i]]++;
		if(cnt[temp[i]] == 1){
			arr.erase(temp[i]);
		}
		cnt[temp[i-m]]--;
		if(cnt[temp[i-m]] == 0){
			arr.insert(temp[i-m]);
		}
		ans = min(ans,*arr.begin());
	}
	cout << ans << endl;
}
