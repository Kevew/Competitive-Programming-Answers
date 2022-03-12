#include <bits/stdc++.h>
using namespace std;

long long arr[300010];
long long lowest[3],curr[3];
long long b[300010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	lowest[0] = lowest[1] = lowest[2] = 1e9;
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		if(i != 0){
			curr[(i-1)%3] += (arr[i]-arr[i-1]);
			lowest[(i-1)%3] = min(lowest[(i-1)%3],curr[(i-1)%3]);
		}
	}
	for(long long i = 0;i < 3;i++){
		if(lowest[i] >= 0){
			lowest[i] = 0;
		}
		lowest[i] = abs(lowest[i]);
	}
	long long curr = lowest[0]+lowest[1]+lowest[2];
	if(curr > arr[0]){
		cout << "No" << endl;
		return 0;
	}
	long long diff = arr[0]-curr;
	lowest[2] += diff;
	for(long long i = 0;i < 3;i++){
		b[i] = lowest[i];
	}
	for(long long i = 1;i < n;i++){
		b[i+2] = arr[i]-(b[i+1]+b[i]);
	}
	
	cout << "Yes" << endl;
	for(long long i = 0;i < n+2;i++){
		cout << b[i] << " ";
	}
}

// 6 9 6 6 5
// x y z x+3 y-3 z+0 x-1


// 0 1 2 1 0
// x y z x+1 y+1 z-1 x+0
