#include <bits/stdc++.h>
using namespace std;

int pos[6][2] = {{0,1},
				 {0,2},
				 {0,3},
				 {1,2},
				 {1,3},
				 {2,3}};

int ans,N,M;

bool won(string cur){
	int score[4] = {0,0,0,0};
	for(int i = 0;i < 6;i++){
		if(cur[i] == 'W'){
			score[pos[i][0]]+=3;
		}else if(cur[i] == 'L'){
			score[pos[i][1]]+=3;
		}else{
			score[pos[i][0]]++;
			score[pos[i][1]]++;
		}
	}
	int maxscore = 0;
	for(int i = 0;i < 4;i++){
		maxscore = max(maxscore,score[i]);
	}
	int cnt = 0;
	for(int i = 0;i < 4;i++){
		if(maxscore == score[i]){
			cnt++;
		}
	}
	if(score[N-1] == maxscore && cnt == 1){
		return true;
	}else{
		return false;
	}
}

void recur(string cur,int index){
	if(index == 6){
		if(won(cur)){
			ans++;
		}
		return;
	}
	
	int pos = cur.find(' ');

	string temp = cur.substr(0,pos) + 'W' + cur.substr(pos+1,6-pos);
	recur(temp,index+1);
	
	temp = cur.substr(0,pos) + 'L' + cur.substr(pos+1,6-pos);
	recur(temp,index+1);
	
	temp = cur.substr(0,pos) + 'T' + cur.substr(pos+1,6-pos);
	recur(temp,index+1);
}

int main(){
	cin >> N >> M;
	int a,b,c,d;
	string temp = "      ";
	for(int i = 0;i < M;i++){
		cin >> a >> b >> c >> d;
		char add;
		if(c > d){
			add = 'W';
		}else if(c < d){
			add = 'L';
		}else{
			add = 'T';
		}
		for(int j = 0;j < 6;j++){
			if(a-1 == pos[j][0] && b-1 == pos[j][1]){
				temp[j] = add;
			}
		}
	}
	recur(temp,M);
	cout << ans << endl;
}
