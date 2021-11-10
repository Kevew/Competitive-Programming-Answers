#include <bits/stdc++.h>
using namespace std;

pair<int,int> a[1010],b[1010];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].first >> b[i].first;
		a[i].second = i;
		b[i].second = i;
	}
	sort(a,a+n);
	sort(b,b+n);
	int ans = 1e9;
	if(a[0].second == b[0].second){
		ans = min(ans,a[0].first+b[0].first);
		ans = min(ans,max(a[0].first,b[1].first));
		ans = min(ans,max(a[1].first,b[0].first));
	}else{
		ans = min(ans,max(a[0].first,b[0].first));
	}
	cout << ans << endl;
}
