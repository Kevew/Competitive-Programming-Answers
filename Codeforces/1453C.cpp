#include <bits/stdc++.h>
using namespace std;

long long arr[2010][2010];
long long maxr[20],minr[20],maxc[20],minc[20];

void solve(){
	for(long long i = 0;i < 15;i++){
		maxr[i] = -1;
		minr[i] = 1e9;
		maxc[i] = -1;
		minc[i] = 1e9;
	}
	
	long long n;
	cin >> n;
	char temp;
	for(long long i = 0;i < n;i++){
		for(long long j = 0;j < n;j++){
			cin >> temp;
			arr[i][j] = temp-'0';
			maxr[arr[i][j]] = max(maxr[arr[i][j]], i);
			minr[arr[i][j]] = min(minr[arr[i][j]], i);
			maxc[arr[i][j]] = max(maxc[arr[i][j]], j);
			minc[arr[i][j]] = min(minc[arr[i][j]], j);
		}
	}
	
	vector<long long> area(10);
	for(long long i = 0; i < n; i++) {
   		for(long long j = 0; j < n; j++) {
	      	area[arr[i][j]] = max(area[arr[i][j]], max(j, n - 1 - j) * max(maxr[arr[i][j]] - i, i - minr[arr[i][j]]));
    	  	area[arr[i][j]] = max(area[arr[i][j]], max(i, n - 1 - i) * max(maxc[arr[i][j]] - j, j - minc[arr[i][j]]));
    	}
  	}
	for(long long ans : area){
		cout << ans << ' ';
	}
  	cout << endl;
}

long long main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
