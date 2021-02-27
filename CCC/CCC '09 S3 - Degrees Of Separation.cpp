#include <bits/stdc++.h>
using namespace std;

int people[100][100];
int visited[100];
int answer = 999999;

map<int,int> friendfriends;

void dfs(int a,int b,int cnt){
	if(visited[a] > cnt){
		visited[a] = cnt;
		for(int i = 0;i <= 50;i++){
			if(i == b && people[a][i] == 1){
				answer = min(answer,cnt);
				return;
			}
			if(people[a][i] == 1){
				dfs(i,b,cnt+1);
			}
		} 
	}
}

void getfriendfriends(int a){
	for(int i = 0;i <= 50;i++){
		if(people[a][i] == 1){
			for(int j = 0;j <= 50;j++){
				if(people[i][j] == 1){
					friendfriends[j] = 1;
				}
			}
		}
	}
	for(int i = 0;i <= 50;i++){
		if(people[a][i] == 1){
			friendfriends[i] = 0;
		}
	}
	friendfriends[a] = 0;
}

int main(){
	people[1][6] = 1;
	people[2][6] = 1;
	people[3][4] = 1;
	people[3][5] = 1;
	people[3][6] = 1;
	people[3][15] = 1;
	people[4][3] = 1;
	people[4][5] = 1;
	people[4][6] = 1;
	people[5][3] = 1;
	people[5][4] = 1;
	people[5][6] = 1;
	people[6][1] = 1;
	people[6][2] = 1;
	people[6][3] = 1;
	people[6][4] = 1;
	people[6][5] = 1;
	people[6][7] = 1;
	people[7][6] = 1;
	people[7][8] = 1;
	people[8][7] = 1;
	people[8][9] = 1;
	people[9][8] = 1;
	people[9][10] = 1;
	people[9][12] = 1;
	people[10][9] = 1;
	people[10][11] = 1;
	people[11][10] = 1;
	people[11][12] = 1;
	people[12][9] = 1;
	people[12][11] = 1;
	people[12][13] = 1;
	people[13][12] = 1;
	people[13][14] = 1;
	people[13][15] = 1;
	people[14][13] = 1;
	people[15][3] = 1;
	people[15][13] = 1;
	people[16][17] = 1;
	people[16][18] = 1;
	people[17][16] = 1;
	people[17][18] = 1;
	people[18][16] = 1;
	people[18][17] = 1;
	
	char a;
	cin >> a;
	while(a != 'q'){
		if(a == 'i'){
			int a,d;
			cin >> a >> d;
			people[a][d] = 1;
			people[d][a] = 1;
		}else if(a == 'd'){
			int a,d;
			cin >> a >> d;
			people[a][d] = 0;
			people[d][a] = 0;
		}else if(a == 'n'){
			int a;
			cin >> a;
			int ans = 0;
			for(int i = 0;i <= 50;i++){
				if(people[a][i] == 1){
					ans++;
				}
			}
			cout << ans << endl;
		}else if(a == 'f'){
			int a;
			cin >> a;
			friendfriends.clear();
			getfriendfriends(a);
			int ans = 0;
			for(auto temp:friendfriends){
				if(temp.second == 1){
					ans++;
				}
			}
			cout << ans << endl;
		}else if(a == 's'){
			int a,b;
			cin >> a >> b;
			memset(visited,999999,sizeof(visited));
			dfs(a,b,1);
			if(answer == 999999){
				cout << "Not connected" << endl;
			}else{
				cout << answer << endl;
			}
			answer = 999999;
		}
		cin >> a;
	}
}

