#include <bits/stdc++.h>
using namespace std;

pair<int,pair<int,int>> arr[200010];

int seg[524288];

int query(int a,int b,int x,int lx,int rx){
	if(lx > b || a > rx) return 0;
	if(lx >= a && rx <= b){
		return seg[x];
	}
	int m = (rx+lx)/2;
	int s1 = query(a,b,2*x+1,lx,m);
	int s2 = query(a,b,2*x+2,m,rx);
	return s1+s2;
}

void addval(int a,int x,int lx,int rx){
	if(rx-lx == 1){
		seg[x] = 1;
		return;
	}
	int m = (rx+lx)/2;
	if(a < m){
		addval(a,2*x+1,lx,m);
	}else{
		addval(a,2*x+2,m,rx);
	}
	seg[x] = seg[2*x+1] + seg[2*x+2];
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> arr[i].second.first >> arr[i].first >> arr[i].second.second;
		arr[i].second.first--;
		arr[i].first--;
	}
	sort(arr,arr+m);
	vector<int> s;
	int curr = 1;
	vector<int> ans(n,0);
	for(int i = 0;i < m;i++){
		while(curr <= arr[i].first+1){
			s.push_back(curr);
			curr++;
		}
		while(query(arr[i].second.first,arr[i].first,0,0,262144) < arr[i].second.second){
			int pos = s.back();
			s.pop_back();
			addval(pos,0,0,262144);
			ans[pos-1] = 1;
		//	cout << arr[i].second.first << " " << arr[i].first << endl;
		//	cout << query(arr[i].second.first,arr[i].first,0,0,262144) << endl;
		}
	}
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	
}
