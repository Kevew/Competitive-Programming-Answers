#include <bits/stdc++.h>
using namespace std;

map<int,int> curr;
int arr[300010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	set<int> temp;
	for(int i = 0;i < k;i++){
		curr[arr[i]]++;
		temp.insert(arr[i]);
	}
	int ans = temp.size();
	
	int testing;
	for(int i = k;i < n;i++){
		curr[arr[i-k]]--;
		if(!curr[arr[i-k]]){
			temp.erase(arr[i-k]);
		}
		temp.insert(arr[i]);
		curr[arr[i]]++;
		testing = temp.size();
		ans = max(ans,testing);
	}
	cout << ans << endl;
}
