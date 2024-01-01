#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	long long rot = 0;
	for(int i = 0;i < q;i++){
		long long a,b;
		cin >> a >> b;
		if(a == 1){
			rot += b%n;
			rot %= n;
		}else{
			if(b <= rot){
				cout << s[n-rot+b-1] << endl;
			}else{
				cout << s[b-rot-1] << endl;
			}
		}
	}
}
