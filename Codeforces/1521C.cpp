#include <bits/stdc++.h>
using namespace std;

int ans[10010];

int ask(int t,int i,int j,int x)
{
	cout << "? " << t << " " << i << " "  << j << " "  << x << endl;
	int temp;
	cin >> temp;
	return temp;
}

void solve(){
	memset(ans,0,sizeof(ans));
	int n;
	cin >> n;
	int pos = 0; 
	for(int i = 1;i+1 <= n;i+=2){
		int temp = ask(2,i,i+1,1);
		if(temp == 1){
			pos = i;
			break;
		}
		if(temp == 2){
			temp = ask(2,i+1,i,1);
			if(temp == 1){
				pos = i+1;
				break;
			}
		}
	}
	if(!pos&&n%2==1){
		pos = n;
	}
	ans[pos] = 1;
	for(int i = 1;i <= n;i++){
		if(i != pos){
			ans[i] = ask(1,pos,i,n-1);
		}
	}
	cout << "! ";
	for(int i = 1;i <= n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
