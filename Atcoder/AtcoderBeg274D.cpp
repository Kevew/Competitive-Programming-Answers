#include <bits/stdc++.h>
using namespace std;

bool dpx[1000][20010],dpy[1000][20010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,x,y;
	cin >> n >> x >> y;
	vector<int> arrx,arry;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		if(i%2 == 0){
			if(i == 0){
				dpx[0][10000+a] = true;
			}else{
				arrx.push_back(a);
			}
		}else{
			arry.push_back(a);
		}
	}
	for(int i = 0;i < arrx.size();i++){
		for(int j = 0;j <= 20000;j++){
			if(dpx[i][j]){
				dpx[i+1][j+arrx[i]] = true;
				dpx[i+1][j-arrx[i]] = true;
			}
		}
	}
	dpy[0][10000] = true;
	for(int i = 0;i < arry.size();i++){
		for(int j = 0;j <= 20000;j++){
			if(dpy[i][j]){
				dpy[i+1][j+arry[i]] = true;
				dpy[i+1][j-arry[i]] = true;
			}
		}
	}
	if(dpx[arrx.size()][x+10000] && dpy[arry.size()][y+10000]){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
