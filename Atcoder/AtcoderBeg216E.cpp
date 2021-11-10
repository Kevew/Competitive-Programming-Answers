#include <bits/stdc++.h>
using namespace std;

map<long long,long long> check;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,k;
	cin >> n >> k;
	long long a;
	for(long long i = 0;i < n;i++){
		cin >> a;
		check[a]++;
	}
	set<pair<long long,long long>,greater<pair<long long,long long>> > q;
	for(auto i: check){
		q.insert({i.first,i.second});
	}
	long long qsize = q.size();
	long long prev = -1,amount = -1;
	long long ans = 0;
	for(long long j = 0;j < qsize;j++){
		pair<long long,long long> i = *q.begin();
		q.erase(q.begin());
		if(prev == -1){
			prev = i.first;
			amount = i.second;
		}else{
			if((prev-i.first)*amount <= k){
				ans += ((prev*(prev+1))/2 - (i.first*(i.first+1))/2)*amount;
				k -= (prev-i.first)*amount;
				prev = i.first;
				amount += i.second;
			}else{
				long long temp = k/amount;
				ans += ((prev*(prev+1))/2 - ((prev-temp)*((prev-temp)+1))/2)*amount;
				ans += (k-(temp*amount))*(prev-temp);
				k = 0;
			}
			if(k <= 0){
				break;
			}
		}
	}
	if(k > 0){
		if(prev*amount <= k){
			ans += ((prev*(prev+1))/2)*amount;
		}else{
			long long temp = k/amount;
			ans += ((prev*(prev+1))/2 - (max(prev-temp,0LL)*(max(prev-temp,0LL)+1)/2))*amount;
			ans += (k-(temp*amount))*max(prev-temp,0LL);
		}
	}
	
	cout << ans << endl;
}
