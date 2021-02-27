#include <bits/stdc++.h>
using namespace std;

string roads[5000];
int arr[50][50];

void warshall(){
	for(int i = 0;i < 26;i++){
		for(int j = 0;j < 26;j++){
			if(arr[j][i]){
				for(int w = 0;w < 26;w++){
					if(arr[i][w]){
						arr[j][w] = true;
					}
				}
			}
		}
	}
}

int main()
{
	string a;
	cin >> a;
	int n = 0,cnt = 0;
	while(a != "**"){
		roads[n] = a;
		cin >> a;
		n++;
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 26;j++){
			for(int k = 0;k < 26;k++){
				if(j == k){
					arr[j][k] = true;
				}else{
					arr[j][k] = false;
				}
			}
		}
		
		for(int j = 0;j < n;j++){
			if(i != j){
				arr[roads[j][0]-'A'][roads[j][1]-'A'] = true;
				arr[roads[j][1]-'A'][roads[j][0]-'A'] = true;
			}
		}
		
		warshall();
		if(!arr[0][1]){
			cout << roads[i] << endl;
			cnt++;
		}
	}
	cout << "There are " << cnt << " disconnecting roads." << endl;
}
