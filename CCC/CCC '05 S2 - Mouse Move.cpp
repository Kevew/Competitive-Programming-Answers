#include <bits/stdc++.h>
using namespace std;

int arr[3010][3010];

int main(){
	int N,M;
	cin >> N >> M;
	int posy = 0,posx = 0;
	int a,b;
	while(true){
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
		if(a > 0){
			posy = min(N,posy+a);
		}else{
			posy = max(0,posy+a);
		}
		if(b > 0){
			posx = min(M,posx+b);
		}else{
			posx = max(0,posx+b);
		}
		cout << posy << " " << posx << endl;
	}
}
