#include <bits/stdc++.h>
using namespace std;

pair<double,double> arr[110];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i].first >> arr[i].second;	
	}
	
	double ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			ans = max(ans,sqrt(abs(arr[i].first-arr[j].first)*abs(arr[i].first-arr[j].first) + abs(arr[i].second-arr[j].second)*abs(arr[i].second-arr[j].second)));
		}
	}
	cout << setprecision(10) << fixed << endl;
	cout << ans << endl;
}
