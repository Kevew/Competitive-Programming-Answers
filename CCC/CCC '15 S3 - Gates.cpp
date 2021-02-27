#include <bits/stdc++.h>
using namespace std;

int airport[100010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int port,N;
	cin >> port >> N;
	
	bool work = true;
	int temp,ans = 0;
	for(int i = 0;i < N && work;i++){
		cin >> temp;
		while(work){
			if(temp <= 0){
				work = false;
				break;
			}else if(airport[temp] == 0){
				airport[temp]++;
				ans++;
				break;
			}else{
				airport[temp]++;
				temp -= airport[temp]-1;
			}
		}
	}
	cout << ans << endl;
}
