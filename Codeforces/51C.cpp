#include <bits/stdc++.h>
using namespace std;

double arr[200010];
int n;

int check(double a){
	double diam = a*2;
	int i = 0;
	int cnt = 1;
	double currend = arr[i]+diam;
	while(i < n){
		if(arr[i] > currend){
			cnt++;
			currend = arr[i]+diam;
		}
		i++;
	}
	return cnt;
}

vector<double> getvalues(double a){
	double diam = a*2;
	int i = 0;
	int cnt = 1;
	double currend = arr[i]+diam;
	vector<double> ans;
	ans.push_back(arr[i]+diam/2);
	while(i < n){
		if(arr[i] > currend){
			cnt++;
			currend = arr[i]+diam;
			ans.push_back(currend-diam/2);
		}
		i++;
	}
	while(ans.size() < 3){
		ans.push_back(1);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	cout << fixed << setprecision(10);
	sort(arr,arr+n);
	double l = 0,r = 1e9;
	while((r-l)>0.0000000001){
		double mid = l+(r-l)/2;
		if(check(mid) > 3){
			l = mid;
		}else{
			r = mid;
		}
	}
	cout << l << endl;
	vector<double> ans = getvalues(r);
	for(int i = 0;i < 3;i++){
		cout << ans[i] << " ";
	}
}
