#include <bits/stdc++.h>
using namespace std;
 
pair<int,int> arr[200010];
 
void check(int i){
	if((arr[i-1].first+arr[i-1].second)%2==1 && arr[i].first > arr[i-1].first && arr[i].second > arr[i-1].second){
		int temp = min(arr[i].first-arr[i-1].first,arr[i].second-arr[i-1].second);
		arr[i-1].first += temp;
		arr[i-1].second += temp;
	}
}
 
void solve(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> arr[i].first;
	}
	for(int i = 1;i <= n;i++){
		cin >> arr[i].second;
	}
	arr[0] = make_pair(1,1);
	sort(arr,arr+n+1);
	int ans = 0;
	for(int i = 1;i <= n;i++){
		check(i);
		if(arr[i].first-arr[i].second != arr[i-1].first-arr[i-1].second){
			int diff = (arr[i].first-arr[i].second)-(arr[i-1].first-arr[i-1].second);
			if((arr[i-1].first+arr[i-1].second)%2==0){
				arr[i-1].first++;
				check(i);
				diff--;
				arr[i-1].first += diff;
			}else{
				if((diff+1)/2 >= 2){
					check(i);
				}
				arr[i-1].first += diff;
			}
			ans += (diff+1)/2;
		}
		if((arr[i-1].first+arr[i-1].second)%2==0){
			ans += arr[i].first-arr[i-1].first;
		}
	}
	cout << ans << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
