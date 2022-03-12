#include <bits/stdc++.h>
using namespace std;


//This is not full solution
//This solution would only get partial points

long long gcd(long long a,long long b){
	if(b == 0){
		return a;
	}
	return gcd(b,a%b);
}

vector<long long> arr[20010];
pair<pair<long long,long long>,long long> check[20010];
long long ans[20010];

int main(){
	long long n,m;
	cin >> n >> m;
	long long a,b,c;
	for(long long i = 0;i < m;i++){
		cin >> a >> b >> c;
		for(long long j = a;j <= b;j++){
			arr[j].push_back(c);
		}
		check[i].first.first = a;
		check[i].first.second = b;
		check[i].second = c;
	}
	
	for(long long i = 1;i <= n;i++){
		long long curr = 1;
		for(long long j = 0;j < arr[i].size();j++){
			curr = ((arr[i][j]*curr)/(gcd(arr[i][j],curr)));
		}
		ans[i] = curr;
	}
	
	bool work = true;
	
	for(long long i = 0;i < m;i++){
		long long curr = ans[check[i].first.first];
		for(long long j = check[i].first.first+1;j <= check[i].first.second;j++){
			curr = gcd(curr,ans[j]);
		}
		if(curr != check[i].second){
			work = false;
			break;
		}
	}
	
	
	if(work){
		for(long long i = 0;i < n;i++){
			cout << ans[i+1] << " ";
		}
		cout << endl;
	}else{
		cout << "Impossible" << endl;
	}
}
