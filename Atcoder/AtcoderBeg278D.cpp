#include <bits/stdc++.h>
using namespace std;

long long arr[200010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
	}
	long long q;
	cin >> q;
	long long bottemset = -1;
	map<long long,long long> added;
	while(q--){
		long long t;
		cin >> t;
		if(t == 1){
			long long x;
			cin >> x;
			bottemset = x;
			added.clear();
		}else if(t == 2){
			long long x,y;
			cin >> x >> y;
			if(bottemset == -1){
				arr[x-1] += y;
			}else{
				added[x-1] += y;
			}
		}else{
			long long x;
			cin >> x;
			if(bottemset == -1){
				cout << arr[x-1] << endl;
			}else{
				cout << added[x-1] + bottemset << endl;
			}
		}
	}
}
