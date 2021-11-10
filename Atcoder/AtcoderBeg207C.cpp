#include <bits/stdc++.h>
using namespace std;

pair<double,double> arr[2010];

int main(){
	int n;
	cin >> n;
	double t,a,b;
	for(int i = 0;i < n;i++){
		cin >> t >> a >> b;
		if(t == 2){
			b -= 0.5;
		}else if(t == 3){
			a += 0.5;
		}else if(t == 4){
			b -= 0.5;
			a += 0.5;
		}
		arr[i] = {a,b};
	}
	
	int ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			if(arr[i].first >= arr[j].first && arr[i].first <= arr[j].second){
				ans++;
			}else if(arr[i].second >= arr[j].first && arr[i].second <= arr[j].second){
				ans++;
			}else if(arr[j].first >= arr[i].first && arr[j].first <= arr[i].second){
				ans++;
			}else if(arr[j].second >= arr[i].first && arr[j].second <= arr[i].second){
				ans++;
			}
		}
	}
	cout << ans << endl;
}
