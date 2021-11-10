#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[200010];
int n;

bool solve(){
	priority_queue<int> check;
	for(int i = 0,p = 1;i < n || !check.empty();){
		while(i < n && arr[i].first <= p){
			check.push(-arr[i].second);
			i++;
		}
		if(check.empty()){
			p = arr[i].first;
		}else if(p > -check.top()){
			return false;
		}else{
			p++;
			check.pop();
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int a,b;
		for(int i = 0;i < n;i++){
			cin >> a >> b;
			arr[i] = {a,b};
		}
		sort(arr,arr+n);
		if(solve()){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}
