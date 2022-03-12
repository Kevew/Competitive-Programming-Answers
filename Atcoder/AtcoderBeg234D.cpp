#include <bits/stdc++.h>
using namespace std;

long long arr[500010];

map<long long,bool> check;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,k;
	cin >> n >> k;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		check[i+1] = false;
	}
	long long pos = 1e9;
	for(long long i = 0;i < k;i++){
		check[arr[i]] = true;
		pos = min(pos,arr[i]);
	}
	cout << pos << endl;
	for(long long i = k;i < n;i++){
		check[arr[i]] = true;
		if(arr[i] > pos){
			pos++;
			while(check[pos] == false){
				pos++;
			}
		}
		cout << pos << endl;
	}
}
