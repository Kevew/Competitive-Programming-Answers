#include <bits/stdc++.h>
using namespace std;

multiset<int> p;

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int curr = -1,j = 0;
	vector<pair<int,int>> ans;
	for(int i = 0;i < n;i++){
		p.insert(arr[i]);
		while(*p.rbegin()-*p.begin() > k){
			p.erase(p.find(arr[j]));
			j++;
		}
		if(i-j+1 > curr){
			curr = i-j+1;
			ans.clear();
		}
		if(i-j+1 == curr){
			ans.push_back(make_pair(j+1,i+1));
		}
	}
	cout << curr << " " << ans.size() << endl;
	for(int i = 0;i < ans.size();i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	
}
