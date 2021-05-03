#include <bits/stdc++.h>
using namespace std;

int n;

vector<pair<int,int>> check(vector<int> a,int start){
    vector<pair<int,int>> res;
    for(int i = 0; i < n/2; i++)
    {
        auto it1 = a.end()-1;
        int y = start - *it1;
        a.erase(it1);
        auto it2 = find(a.begin(),a.end(),y);
        if(it2 == a.end()) return {};
        res.push_back({start - y,y});
        start = max(start - y, y);
        a.erase(it2);
    }
    return res;
}

void solve(){
	vector<int> arr;
	cin >> n;
	n *= 2;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	for(int i = 0;i < n-1;i++){
		int x = arr[i] + arr[n-1];
		vector<pair<int,int>> temp = check(arr,x);
		if(temp.size() > 0){
			cout << "YES" << endl;
			cout << x << endl;
			for(int i = 0;i < temp.size();i++){
				cout << temp[i].first << " " << temp[i].second << endl;
			}
			return;
		}
	}
	cout << "NO" << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
