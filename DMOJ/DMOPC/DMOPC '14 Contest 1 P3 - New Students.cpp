#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	double ans = 0,temp;
	for(int i = 0;i < N;i++){
		cin >> temp;
		ans += temp;
	}
	int I;
	cin >> I;
	for(int i = 1;i <= I;i++){
		cin >> temp;
		ans += temp;
		cout << ans/(N+i) << "\n";
	}
}
