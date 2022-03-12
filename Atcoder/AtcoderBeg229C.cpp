#include <bits/stdc++.h>
using namespace std;

pair<long long,int> arr[300010];

int main(){
	int	n,w;
	cin >> n >> w;
	for(int i = 0;i < n;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	long long ans = 0;
	sort(arr,arr+n,greater<pair<long long,int>>());
	for(int i = 0;i < n;i++){
		int temp = min(w,arr[i].second);
		w -= temp;
		ans += arr[i].first * temp;
		if(w == 0){
			break;
		}
	}
	cout << ans << endl;
}
