#include <bits/stdc++.h>
using namespace std;

int arr[200010];
int ans[200010];

map<int,map<int,int>> track;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		track[i%m][arr[i]]++;
		ans[i] = arr[i];
	}
	sort(ans,ans+n);
	
	bool check = false;
	for(int i = 0;i < n;i++){
		if(track[i%m][ans[i]] == 0){
			check = true;
			break;
		}
		track[i%m][ans[i]]--;
	}
	if(check){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
}
