#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=110;
int a[N][N];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
			sort(a[i],a[i]+m);
		}
		
		for(int i=m;i;i--){
			int p=0;
			for(int j=0;j<n;j++){
				if(a[j][0]<a[p][0]){
					p=j;
				}
			}
			rotate(a[p],a[p]+1,a[p]+i);
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<' ';
			}
			cout<<'\n';
		}
		
	}
}
