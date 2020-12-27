#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,double> a, pair<int,double> b){
	if(a.first < b.first){
		return true;
	}
	return false;
}

int main(){
	int N;
	cin >> N;
	vector<pair<int,double>> arr;
	int a,b;
	for(int i = 0;i < N;i++){
		cin >> a >> b;
		arr.push_back({a,b});
	}
	sort(arr.begin(),arr.end(),compare);
	double highest = 0;
	for(int i = 1;i < N;i++){
		highest = max(highest,abs(max(arr[i].second,arr[i-1].second)-min(arr[i].second,arr[i-1].second))/(arr[i].first-arr[i-1].first));
	}
	cout << fixed << setprecision(6);
	cout << highest << endl;
}
