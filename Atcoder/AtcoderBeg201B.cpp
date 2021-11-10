#include <bits/stdc++.h>
using namespace std;

int main(){
	#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,string>> arr;
	string a;
	int b;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		arr.push_back({b,a});
	}
	sort(arr.begin(),arr.end());
	cout << arr[arr.size()-2].second << endl;
}
}
