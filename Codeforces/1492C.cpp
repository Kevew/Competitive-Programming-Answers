#include <bits/stdc++.h>
using namespace std;

int pos1[200010],pos2[200010];

int main(){
	int s,t;
	cin >> s >> t;
	string a,b;
	cin >> a >> b;
	int j = 0;
	for(int i = 0;i < s;i++){
		if(j > t-1){
			break;
		}
		if(a[i] == b[j]){
			pos1[j] = i;
			j++;
		}
	}
	j = t-1;
	for(int i = s-1;i>=0;i--){
		if(j < 0){
			break;
		}
		if(a[i] == b[j]){
			pos2[j] = i;
			j--;
		}
	}
	int ans = 0;
	for(int i = 1;i < t;i++){
		ans = max(ans,pos2[i]-pos1[i-1]);
	}
	cout << ans << endl;
}
