#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b;
	cin >> a >> b;
	long long temp = a,temp2 = b;
	long long total = 0,ans = 0,lastremoval = 0;
	long long i = 0;
	while(i <= 30){
		cout << ((1<<i)&temp) << " " << ((1<<i)&temp2) << " " << (1<<i) << endl;
		if((1<<i)&temp && (1<<i)&temp2){
			i++;
			continue;
		}
		if((1<<i)&temp && !((1<<i)&temp2)){
			ans += (1<<i);
			lastremoval = (1<<i);
			i++;
		}else if(!(1<<i)&temp && ((1<<i)&temp2)){
			ans += (1<<i);
			lastremoval = (1<<i);
			i++;
		}else{
			i++;
		}
	}
	cout << ans-1 << endl;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}

//101000001001000110
//001101110101100110
//000101101100100000


//1000
//0101
//0011
