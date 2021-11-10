#include <bits/stdc++.h>
using namespace std;

vector<int> arr[200010];
int change[200010];

int main(){
	int n,m;
	cin >> n >> m;
	int a,b;
	for(int i = 0;i < m;i++){
		cin >> a >> b;
		arr[a].push_back(b);
	}
	stack<int> far;
	for(int i = 0;i < n;i++){
		sort(arr[i].begin(),arr[i].end());
		
	}
}
