#include <bits/stdc++.h>
using namespace std;

int partner[10010];

int check(int a,int b){
	int temp = a,cnt = 0;
	while(partner[a] != temp){
		if(partner[a] == b){
			return cnt;
		}
		a = partner[a];
		cnt++;
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		partner[a] = b;
	}
	
	int a,b;
	cin >> a >> b;
	while(a != 0 && b != 0){
		int temp = check(a,b);
		if(temp == -1){
			cout << "No" << endl;
		}else{
			cout << "Yes " << temp << endl;
		}
		cin >> a >> b;
	}
}
