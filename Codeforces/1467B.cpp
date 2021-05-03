#include <bits/stdc++.h>
using namespace std;

int arr[300010];
int hv[300010];

int n;

bool checkhill(int i){
	return i > 0 && i < n-1 && arr[i] > arr[i-1] && arr[i] > arr[i+1];
}

bool checkval(int i){
	return i > 0 && i < n-1 && arr[i] < arr[i-1] && arr[i] < arr[i+1];
}

void solve(){
	memset(hv,0,sizeof(hv));
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	hv[0] = 0;
	hv[n-1] = 0;
	int total = 0;
	for(int i = 1;i < n-1;i++){
		if(checkhill(i)){
			hv[i] = 1;
			total++;
		}else if(checkval(i)){
			hv[i] = 1;
			total++;
		}
	}
	int ans = total;
	for(int i = 1;i < n-1;i++){
		int temp = arr[i];
		arr[i] = arr[i-1];
		ans = min(ans,total-hv[i-1]-hv[i]-hv[i+1]+checkhill(i)+checkval(i)+checkhill(i+1)+checkval(i+1));
		arr[i] = arr[i+1];
		ans = min(ans,total-hv[i-1]-hv[i]-hv[i+1]+checkhill(i-1)+checkval(i-1)+checkhill(i)+checkval(i));
		arr[i] = temp;
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
