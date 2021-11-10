#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[200010];

int main(){
	long long n,j;
	cin >> n >> j;
	int mx,my;
	cin >> mx >> my;
	int a,b;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		arr[i] = make_pair(a,b);
		arr[i+n] = arr[i];
	}
	j = j%(n*2);
	for(int i = 0;i < j;i++){
		if(mx > arr[i].first){
			mx = mx - abs(mx-arr[i].first)*2;
		}else{
			mx = abs(mx-arr[i].first)*2 + mx;
		}
		if(my > arr[i].second){
			my = my - abs(my-arr[i].second)*2;
		}else{
			my = abs(my-arr[i].second)*2 + my;
		}
	}
	cout << mx << " " << my << endl;
}
