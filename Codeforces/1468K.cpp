#include <bits/stdc++.h>
using namespace std;

int setx[5010],sety[5010];

void solve(){
	memset(setx,0,sizeof(setx));
	memset(sety,0,sizeof(sety));
	string a;
	cin >> a;
	int n = a.size();
	for(int i = 0;i < n;i++){
		setx[i+1] = setx[i]+(a[i]=='L'? -1:(a[i]=='R'? 1 : 0));
      	sety[i+1] = sety[i]+(a[i]=='D'? -1:(a[i]=='U'? 1 : 0));
	}
	
	int ansx = 0,ansy = 0;
	for(int i = 1;i <= n;i++){
		int x = 0,y = 0;
		for(int j = 0;j < n;j++){
			if(a[j]=='U') y += 1;
        	if(a[j]=='D') y -= 1;
        	if(a[j]=='L') x -= 1;
        	if(a[j]=='R') x += 1;
        	if(x == setx[i] && y == sety[i]){
        		if(a[j]=='U') y -= 1;
        		if(a[j]=='D') y += 1;
        		if(a[j]=='L') x += 1;
        		if(a[j]=='R') x -= 1;
			}
		}
		if(x == 0 && y == 0){
			ansx = setx[i];
			ansy = sety[i];
			break;
		}
	}
	cout << ansx << " " << ansy << endl;
	
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
