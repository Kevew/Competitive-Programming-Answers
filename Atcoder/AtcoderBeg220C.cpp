#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	long long total = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		total += arr[i];
	}
	arr[n] = arr[0];
	long long x;
	cin >> x;
	long long ans = (x/total)*n;
	x %= total;
	int i = 0;
	while(x >= 0){
		x -= arr[i];
		i++;
	}
	cout << ans+i << endl;
}
