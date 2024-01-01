#include <bits/stdc++.h>
using namespace std;

int ans[200010];

int main(){
	int n,q;
	cin >> n >> q;
	map<int,int> pos;
	for(int i = 0;i < n;i++){
		pos[i+1] = i;
		ans[i] = i+1;
	}
	for(int i = 0;i < q;i++){
		int a;
		cin >> a;
		if(pos[a] == n-1){
			swap(ans[pos[a]],ans[pos[a]-1]);
			pos[ans[pos[a]]]++;
			pos[a]--;
		}else{
			swap(ans[pos[a]],ans[pos[a]+1]);
			pos[ans[pos[a]]]--;
			pos[a]++;
		}
	}
	for(int i = 0;i < n;i++){
		cout << ans[i] << " ";
	}
}
