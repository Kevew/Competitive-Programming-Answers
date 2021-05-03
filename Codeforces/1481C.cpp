#include <bits/stdc++.h>
using namespace std;

int a[100010],b[100010],c[100010],ans[100010];
vector<int> paint[100010];

void test(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i+1];
	}
	for(int i = 0;i < n;i++){
		cin >> b[i+1];
	}
	for(int i = 0;i < m;i++){
		cin >> c[i+1];
	}
	ans[m] = -1;
	for(int i = 1;i <= n;i++){
		if(b[i] == c[m]){
			ans[m] = i;
			if(a[i] != b[i]){
				a[i] = c[m];
				break;
			}
		}
	}
	if(ans[m] == -1){
		cout << "NO\n";
		return;
	}
	for(int i = 0;i < n;i++){
		paint[i+1].clear();
	}
	for(int i = 1;i <= n;i++){
		if(a[i] != b[i]){
			paint[b[i]].push_back(i);
		}
	}
	for(int i=1;i<=m-1;i++){
		if(paint[c[i]].size() > 0){
			ans[i] = paint[c[i]].back();
			paint[c[i]].pop_back();
		}else{
			ans[i] = ans[m];
		}
	}
	for(int i = 0;i < n;i++){
		if(paint[i+1].size()){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	for(int i = 0;i < m;i++){
		printf("%d%c",ans[i+1]," \n"[i+1==m]);
	}
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		test();
	}
}
