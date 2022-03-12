#include <bits/stdc++.h>
using namespace std;

bool vis[1010];

int main(){
	for(int i = 1;i < 1000;i++){
		for(int j = 1;j < 1000;j++){
			if(3*i+4*i*j+3*j <= 1000){
				vis[3*i+4*i*j+3*j] = true;
			}else{
				break;
			}
		}
	}
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0;i < n;i++){
		int temp;
		cin >> temp;
		if(vis[temp]){
			ans++;
		}
	}
	cout << n-ans << endl;
}

