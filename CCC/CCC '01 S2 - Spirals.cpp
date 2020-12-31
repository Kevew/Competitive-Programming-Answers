#include <bits/stdc++.h>
using namespace std;

int arr[210][210];
int dir[4][2] = {{1,0},
				 {0,1},
				 {-1,0},
				 {0,-1}};

int main(){
	int N,M;
	cin >> N >> M;
	
	int printx1 = 100,printx2 = 100,printy1 = 100,printy2 = 100;
	int x = 100,y = 100;
	int direction = 0,power = 1,temppower = 0,switchtonextpoint = 0;
	
	arr[y][x] = N;
	
	for(int i = 1;i <= M-N;i++){
		y += dir[direction][0];
		x += dir[direction][1];
		arr[y][x] = N+i;
		temppower++;
		if(temppower == power){
			switchtonextpoint++;
			temppower = 0;
			direction++;
			if(direction == 1){
				printx2++;
			}else if(direction == 2){
				printy2++;
			}else if(direction == 3){
				printx1--;
			}else if(direction == 4){
				direction = 0;
				printy1--;
			}
		}
		if(switchtonextpoint == 2){
			power++;
			switchtonextpoint = 0;
		}
	}
	for(int i = printx1;i <= printx2;i++){
		for(int j = printy1;j <= printy2;j++){
			if(arr[i][j] == 0){
				cout << "   ";
			}else{
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	
}
