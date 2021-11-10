#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[51];
int boxes[51];

int main(){
	int n,m,q;
	cin >> n >> m >> q;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		arr[i] = {b,a};
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	for(int i = 0;i < m;i++){
		cin >> boxes[i];
	}
	
	while(q--){
		int l,r;
		cin >> l >> r;
		l--,r--;
		vector<int> a;
		for(int i = 0;i < l;i++){
			a.push_back(boxes[i]);
		}
		for(int i = r+1;i < m;i++){
			a.push_back(boxes[i]);
		}
		sort(a.begin(),a.end());
		vector<bool> check(a.size(),false);
		int ans = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < a.size();j++){
				if(!check[j] && a[j] >= arr[i].second){
					ans += arr[i].first;
					check[j] = true;
					break;
				}
			}
		}
		cout << ans << endl;
	}
}
