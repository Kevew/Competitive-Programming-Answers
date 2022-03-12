#include <bits/stdc++.h>
using namespace std;

int pos[1010];
int arr[1010];

int merge(int a){
	if(pos[a] == a){
		return a;
	}
	return pos[a] = merge(pos[a]);
}

int main(){
	int n,d;
	cin >> n >> d;
	for(int i = 0;i <= n;i++){
		pos[i] = i;
	}
	long long cnt = 0;
	int a,b;
	for(int i = 0;i < d;i++){
		cin >> a >> b;
		a = merge(a);
		b = merge(b);
		if(a == b){
			cnt++;
		}else{
			pos[a] = b;
		}
		memset(arr,0,sizeof(arr));
		for(int j = 1;j <= n;j++){
			arr[merge(j)]++;
		}
		sort(arr+1,arr+n+1,greater<int>());
		long long ans = 0;
		for(int j = 1;j <= cnt+1;j++){
			ans += arr[j];
		}
		cout << ans-1 << endl;
	}
}
