#include <bits/stdc++.h>
using namespace std;

string name[110];
int weight[110];
int best[110];
int group[110];

int main(){
	int n,m;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		cin >> name[i] >> weight[i];
	}
	for(int i = 0;i <= n;i++){
		best[i] = 999999;
		group[i] = -1;
	}
	best[0] = 0;
	group[0] = 0;
	for(int i = 0;i < n;i++){
		int cur = 0;
		for(int j = 1;j <= m && j+i-1 < n;j++){
			cur = max(cur,weight[i+j-1]);
			if(best[i]+cur < best[i+j]){
				best[i+j] = best[i]+cur;
				group[i+j] = j;
			}
		}
	}
	cout << "Total Time: " << best[n] << endl;
	
	int lines[110];
	memset(lines,0,sizeof(lines));
	int i = n,x = 0;
	while(group[i] != 0){
		lines[x++] = group[i];
		i -= group[i];
	}
	int temp = 0;
	for(i = x-1;i >= 0;i--){
		for(int j = 0;j < lines[i];j++){
			cout << name[temp++] + " ";
		}
		cout << endl;
	}
}
