#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,w,n;
	cin >> h >> w >> n;
	int a,b;
	vector<pair<int,int>> check1;
	vector<pair<int,int>> check2;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		check1.push_back({a,i});
		check2.push_back({b,i});
	}
	
	sort(check1.begin(),check1.end());
	sort(check2.begin(),check2.end());
	int curr1 = 1,curr2 = 1;
	vector<pair<int,int>> ans(n);
	for(int i = 0;i < n;i++){
		if(i > 0){
			if(check1[i].first > check1[i-1].first){
				curr1++;
			}
			if(check2[i].first > check2[i-1].first){
				curr2++;
			}
		}
		ans[check1[i].second].first = curr1;
		ans[check2[i].second].second = curr2;
	}
	
	for(int i = 0;i < n;i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}
}

