#include <bits/stdc++.h>
using namespace std;

pair<int,int> r[100010];
int c[100010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> r[i].second;
		r[i].first = i;
	}
	
	for(int i = 0;i < n;i++){
		cin >> c[i];
	}
	int q;
	cin >> q;
	while(q--){
		int a,b;
		cin >> a >> b;
		b--;
		a--;
//		cout << r[a].second << endl;
		if(n-r[a].second < c[b]){
			cout << "#";
		}else{
			cout << ".";
		}
	}
}
