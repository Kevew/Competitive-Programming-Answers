#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	vector<long long> eve;
	vector<long long> odd;
	for(int i = 0;i < arr.size();i++){
		if(arr[i]%2 == 0){
			eve.push_back(arr[i]);
		}else{
			odd.push_back(arr[i]);
		}
	}
	long long ans = -1;
	if(eve.size() >= 2){
		ans = max(ans,eve[eve.size()-1] + eve[eve.size()-2]);
	}
	if(odd.size() >= 2){
		ans = max(ans,odd[odd.size()-1] + odd[odd.size()-2]);
	}
	cout << ans << endl;
}
