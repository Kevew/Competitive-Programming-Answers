#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int q;
	cin >> q;
	int t,a,b;
	int flip = 0;
	while(q--){
		cin >> t >> a >> b;
		if(t == 2){
			flip = (flip+1)%2;
		}else{
			if(flip){
				if(a <= n){
					a += n;
				}else{
					a -= n;
				}
				if(b <= n){
					b += n;
				}else{
					b -= n;
				}
				swap(s[a-1],s[b-1]);
			}else{
				swap(s[a-1],s[b-1]);
			}
		}
	}
	if(flip){
		for(int i = n;i < 2*n;i++){
			cout << s[i];
		}
		for(int i = 0;i < n;i++){
			cout << s[i];
		}
		cout << endl;
	}else{
		cout << s << endl;
	}
}
