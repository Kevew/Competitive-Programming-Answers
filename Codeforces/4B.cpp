#include <bits/stdc++.h>
using namespace std;

int maxx[40],minx[40];

int main(){
	int d,sumTime;
	int a,b;
	cin >> d >> sumTime;
	int curr = 0;
	int highest = 0;
	for(int i = 0;i < d;i++){
		cin >> a >> b;
		minx[i] = a;
		maxx[i] = b;
		curr += a;
		highest += b;
	}
	
	if(sumTime >= curr && sumTime <= highest){
		cout << "YES" << endl;
		int i = 0;
		while(curr < sumTime){
			if(curr+(maxx[i]-minx[i]) <= sumTime){
				curr += (maxx[i]-minx[i]);
				cout << maxx[i] << " ";
			}else{
				cout << (sumTime-curr)+minx[i] << " ";
				curr += (sumTime-curr);
			}
			i++;
		}
		for(;i < d;i++){
			cout << minx[i] << " ";
		}
	}else{
		cout << "NO" << endl;
	}
}
