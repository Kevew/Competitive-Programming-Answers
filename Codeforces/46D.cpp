#include <bits/stdc++.h>
using namespace std;

map<int,int> pos;
int ans[110];

int main(){
	int L,b,f;
	cin >> L >> b >> f;
	int n;
	cin >> n;
	int temp,x;
	pos[-b] = -b;
	pos[L+f] = L+f;
	for(int i = 1;i <= n;i++){
		cin >> temp >> x;
		if(temp == 1){
			ans[i] = -1;
			for(auto check1 = pos.begin(),check2 = check1++;check1 != pos.end();check1++,check2++){
				if(check1->first-check2->second>=b+f+x){
					ans[i] = check2->second+b;
					pos[ans[i]] = ans[i]+x;
					break;
				}
			}
			cout << ans[i] << endl;
		}else{
			pos.erase(ans[x]);
		}
	}
}
