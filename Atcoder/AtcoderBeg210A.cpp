#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,A,X,Y;
	cin >> N >> A >> X >> Y;
	int ans = 0;
	if(N >= A){
		ans = (N-A)*Y + A*X;
	}else{
		ans = N*X;
	}
	cout << ans << endl;
}
