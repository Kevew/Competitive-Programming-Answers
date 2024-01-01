#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	if(c < 0){
		if(a > b){
			cout << a-b << endl;
		}else if(a <= b && a >= b+c*(d-1)){
			long long curr = b-a;
			curr /= abs(c);
			cout << min(abs((b+c*(curr))-a),abs((b+c*(curr+1))-a));
		}else{
			cout << abs((b+c*(d-1))-a) << endl;
		}
	}else if(c > 0){
		if(a < b){
			cout << b-a << endl;
		}else if(a >= b && a <= b+c*(d-1)){
			long long curr = a-b;
			curr /= c;
			cout << min(abs((b+c*(curr))-a),abs((b+c*(curr+1))-a));
		}else{
			cout << abs(a-(b+c*(d-1))) << endl;
		}
	}else if(c == 0){
		cout << abs(b-a) << endl;
	}
}
