#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	char ans;
	if(m%n == 0){
		m /= n;
		ans = 'A'+m-1;
	}else{
		m /= n;
		ans = 'A'+m;
	}
	cout << ans << endl;
}
