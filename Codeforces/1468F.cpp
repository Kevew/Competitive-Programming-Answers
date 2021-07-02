#include <bits/stdc++.h>
using namespace std;

map<pair<long long,long long>,pair<long long,long long>> arr;

long long gcd(long long a,long long b){
    if(a==0) return b;
    if(b==0) return a;
    a=abs(a);
    b=abs(b);
    if(a>b) return gcd(b,a);
    return gcd(b%a,a);
}

void solve(){
	arr.clear();
	long long n;
	cin >> n;
	long long x1,y1,x2,y2;
	long long temp1 = 0,temp2 = 0,temp3 = 0;
	for(long long i = 0;i < n;i++){
		cin >> x1 >> y1 >> x2 >> y2;
		temp1 = x2-x1;
		temp2 = y2-y1;
		
		if(temp1 == 0){
			if(temp2 > 0){
				temp2 = 1;
			}else{
				temp2 = -1;
			}
		}else if(temp2 == 0){
			if(temp1 > 0){
				temp1 = 1;
			}else{
				temp1 = -1;
			}
		}else{
			long long gcded = gcd(temp1,temp2);
			temp1 /= gcded;
			temp2 /= gcded;
		}
		
		pair<long long,long long> newcoor = {0-temp1,0-temp2};
 		if(arr[newcoor].first > 0){
			arr[newcoor].second++;
			continue;
		}
		pair<long long,long long> newnewcoor = {temp1,temp2};
		arr[newnewcoor].first += 1;
	}
	
	long long ans = 0;
	for(auto value: arr){
		ans += value.second.first * value.second.second;
	}
	cout << ans << endl;
}

long long main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
