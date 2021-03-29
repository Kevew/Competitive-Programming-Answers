#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int a,b;
	int worst,maxx = 0;
	int temp = 0;
	for(int i = 0;i < N-1;i++){
		cin >> a >> b;
		if(i == 0){
			worst = a;
			maxx = a;
		}else{
			worst -= b;
			int as = min(temp,b);
			temp -= as;
			temp += a;
			b -= as;
			as = min(maxx,b);
			maxx -= as;
			b -= as;
		}
	}
	cout << max(0,worst) << endl << maxx << endl;
}
