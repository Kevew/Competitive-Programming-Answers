#include <bits/stdc++.h>
using namespace std;

int jerseys[1000010];

int main(){
	int n,m;
	cin >> n >> m;
	char temp1;
	for(int i = 0;i < n;i++){
		cin >> temp1;
		if(temp1 == 'S'){
			jerseys[i+1] = 1;
		}else if(temp1 == 'M'){
			jerseys[i+1] = 2;
		}else{
			jerseys[i+1] = 3;
		}
	}
	int temp2;
	int ans = 0;
	int test = 0;
	for(int i = 0;i < m;i++){
		cin >> temp1 >> temp2;
		if(temp1 == 'S'){
			test = 1;
		}else if(temp1 == 'M'){
			test = 2;	
		}else{
			test = 3;
		}
		if(jerseys[temp2] >= test){
			ans++;
			jerseys[temp2] = 0;
		}
	}
	cout << ans << endl;
}
