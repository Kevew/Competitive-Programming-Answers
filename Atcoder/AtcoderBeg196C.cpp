#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i = 1;i < 1000010;i++){
		string temp = to_string(i);
		string t = temp+temp;
		long long curr = stoll(t);
		if(curr <= n){
			ans++;
		}
	}
	cout << ans << endl;
}
