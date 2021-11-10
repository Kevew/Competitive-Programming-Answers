#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	n = abs(n);
	int ans = 0;
	for(int i=1,t=1;n&&!ans;++i,t+=i){
		if(t==n||(t>n&&!((t-n)%2))){
			ans=i;
		}
	}
	cout << ans << endl;
}
