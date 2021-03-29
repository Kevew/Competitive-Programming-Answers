#include <bits/stdc++.h>
using namespace std;

int arr[60][60];

int N,M;
int ansy,ansx;

void dfs(int y,int x){
	queue<pair<int,pair<int,int>>> que;
	que.push(make_pair(0,make_pair(y,x)));
	pair<int,pair<int,int>> temp;
	while(!que.empty()){
		temp = que.front();
		que.pop();
		int tempy = temp.second.first,tempx = temp.second.second;
		if(tempy >= 0 && tempy < M && tempx >= 0 && tempx < N){
			if(temp.first < arr[tempy][tempx]){
				arr[tempy][tempx] = temp.first;
				if(ansy == tempy && ansx == tempx){
					if(temp.first < 60){
						break;
					}
				}
				que.push(make_pair(temp.first+1,make_pair(tempy+1,tempx)));
				que.push(make_pair(temp.first+1,make_pair(tempy-1,tempx)));
				que.push(make_pair(temp.first+1,make_pair(tempy,tempx+1)));
				que.push(make_pair(temp.first+1,make_pair(tempy,tempx-1)));
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> N >> M;
		char temp;
		int starty,startx;
		for(int i = 0;i < M;i++){
			for(int j = 0;j < N;j++){
				cin >> temp;
				if(temp == 'O'){
					arr[i][j] = 99999;
				}else if(temp == 'C'){
					arr[i][j] = 99999;
					starty = i;
					startx = j;
				}else if(temp == 'X'){
					arr[i][j] = -1;
				}else{
					ansy = i;
					ansx = j;
					arr[i][j] = 99999;
				}
			}
		}
		dfs(starty,startx);
		
		if(arr[ansy][ansx] < 60){
			cout << arr[ansy][ansx] << endl;
		}else{
			cout << "#notworth" << endl;
		}
	}
}
