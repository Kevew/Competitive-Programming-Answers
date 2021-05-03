#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,U,R,D,L;
		cin >> n >> U >> R >> D >> L;
		bool skip = true;
		for(int i = 0;i < 16;i++){
			int p1 = U,p2 = R,p3 = D,p4 = L;
			if(i&1){
				p1--;
				p2--;
			}
			if(i&2){
				p2--;
				p3--;
			}
			if(i&4){
				p3--;
				p4--;
			}
			if(i&8){
				p4--;
				p1--;
			}
			if(min(min(p1,p2),min(p3,p4)) >= 0 && max(max(p1,p2),max(p3,p4)) <= n - 2){
				cout << "YES" << endl;
				skip = false;
				break;
			}
		}
		if(skip){
			cout << "NO" << endl;
		}
	}
}
