#include <bits/stdc++.h>
using namespace std;

int a[2010],b[2010],c[2010],d[2010];

int arr[1000010];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	for(int i = 0;i < m;i++){
		cin >> c[i] >> d[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i]<=c[j]&&b[i]<=d[j]){
				arr[c[j]-a[i]] = max(arr[c[j]-a[i]],d[j]-b[i]+1);
			}
		}
	}
	int ans = 1e9;
	for(int i=1000000;i>=0;i--){
		arr[i]=max(arr[i],arr[i+1]);
		ans=min(ans,arr[i]+i);
	}
	cout<<ans<<endl;
}
