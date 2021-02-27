#include <bits/stdc++.h>
using namespace std;

long arr[3][3];
string b[3][3];

int getX(){
	int ans = 0;
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			if(b[i][j] == "X"){
				ans++;
			}
		}
	}
	return ans;
}

void setRowD(int a,int add){
	if(b[a][0] != "X"){
		arr[a][1] = arr[a][0] + add;
		arr[a][2] = arr[a][1] + add;
		b[a][1] = "XX";
		b[a][2] = "XX";
		return;
	}else if(b[a][1] != "X"){
		arr[a][0] = arr[a][1] - add;
		arr[a][2] = arr[a][1] + add;
		b[a][0] = "XX";
		b[a][2] = "XX";
		return;
	}else if(b[a][2] != "X"){
		arr[a][1] = arr[a][2] - add;
		arr[a][0] = arr[a][1] - add;
		b[a][0] = "XX";
		b[a][1] = "XX";
		return;
	}
}


void setColD(int a,int add){
	if(b[0][a] != "X"){
		arr[1][a] = arr[0][a] + add;
		arr[2][a] = arr[1][a] + add;
		b[1][a] = "XX";
		b[2][a] = "XX";
		return;
	}else if(b[1][a] != "X"){
		arr[0][a] = arr[1][a] - add;
		arr[2][a] = arr[1][a] + add;
		b[0][a] = "XX";
		b[2][a] = "XX";
		return;
	}else if(b[2][a] != "X"){
		arr[1][a] = arr[2][a] - add;
		arr[0][a] = arr[1][a] - add;
		b[0][a] = "XX";
		b[1][a] = "XX";
		return;
	}
}

void setRow(int a){
	if(b[a][0] == "X" && b[a][1] != "X" && b[a][2] != "X"){
		b[a][0] = "XX";
		arr[a][0] = arr[a][1]-(arr[a][2]-arr[a][1]);
	}else if(b[a][0] != "X" && b[a][1] == "X" && b[a][2] != "X"){
		b[a][1] = "XX";
		arr[a][1] = arr[a][0]+(arr[a][2]-arr[a][0])/2;
	}else if(b[a][0] != "X" && b[a][1] != "X" && b[a][2] == "X"){
		b[a][2] = "XX";
		arr[a][2] = arr[a][1]+(arr[a][1]-arr[a][0]);
	}
}

void setCol(int a){
	if(b[0][a] == "X" && b[1][a] != "X" && b[2][a] != "X"){
		b[0][a] = "XX";
		arr[0][a] = arr[1][a]-(arr[2][a]-arr[1][a]);
	}else if(b[0][a] != "X" && b[1][a] == "X" && b[2][a] != "X"){
		b[1][a] = "XX";
		arr[1][a] = arr[0][a]+(arr[2][a]-arr[0][a])/2;
	}else if(b[0][a] != "X" && b[1][a] != "X" && b[2][a] == "X"){
		b[2][a] = "XX";
		arr[2][a] = arr[1][a]+(arr[1][a]-arr[0][a]);
	}
}

void update(){
	setRow(0);
	setRow(1);
	setRow(2);
	setCol(0);
	setCol(1);
	setCol(2);
}

void handle45(){
	update();
	int temp = getX();
	if(temp == 4){
		int pos = 0,add;
		for(int i = 0;i < 3;i++){
			if(b[i][0] != "X" && b[i][1] != "X" && b[i][2] != "X"){
				pos = i;
				add = arr[i][2]-arr[i][1];
				break;
			}
		}
		
		for(int i = 0;i < 3;i++){
			if(pos != i){
				setRowD(i,add);
			}
		}
	}
}

void handleseven(){
	update();
	int temp = getX();
	if(temp == 7 || temp == 6){
		int f1p,f2p;
		int s1p,s2p;
		bool fi = true;
		for(int i = 0;i < 3;i++){
			for(int j = 0;j < 3;j++){
				if(b[i][j] != "X"){
					if(fi){
						f1p = i;
						f2p = j;
						fi = false;
					}else{
						s1p = i;
						s2p = j;
					}
				}
			}
		}
		
		int y = s1p-f1p;
		int x = s2p-f2p;
		long diff = arr[s1p][s2p]-arr[f1p][f2p];
		int c = 0;
		if(y == 0){
			setColD(0,0);
			setColD(1,0);
			setColD(2,0);
		}else if(x == 0){
			setRowD(0,0);
			setRowD(1,0);
			setRowD(2,0);
		}else{
			int d = diff/x;
			if(diff%x == 1){
				d++;
			}
			setRowD(0,d);
			setRowD(1,d);
			setRowD(2,d);
		}
		update();
	}
}

void handlesix(){
	update();
	int temp = getX();
	if(temp == 6){
		for(int i = 0;i < 3;i++){
			if(b[i][0] != "X" && b[i][1] != "X" && b[i][2] != "X"){
				handleseven();
				return;
			}
		}
		if(b[1][1] == "X"){
			if(b[0][0] != "X"){
				arr[1][1] = arr[1][2];
			}else if(b[0][2] != "X"){
				arr[1][1] = arr[1][0];
			}else if(b[2][0] != "X"){
				arr[1][1] = arr[1][2];
			}else{
				arr[1][1] = arr[1][0];
			}
			b[1][1] = "XX";
		}else{
			arr[1][0] = arr[1][1];
			b[1][0] = "XX";
		}
	}
}


int main(){
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			cin >> b[i][j];
			if(b[i][j] == "X"){
				arr[i][j] = 0;
			}else{
				arr[i][j] = stoi(b[i][j]);
			}
		}
	}
	int cntX = getX();
	while(cntX > 0){
		if(cntX == 9){
			break;
		}else if(cntX == 8){
			int add = 0;
			for(int i = 0;i < 3;i++){
				for(int j = 0;j < 3;j++){
					if(b[i][j] != "X"){
						add = arr[i][j];
						break;
					}
				}
			}
			for(int i = 0;i < 3;i++){
				for(int j = 0;j < 3;j++){
					arr[i][j] = add;
				}
			}
			break;
		}else if(cntX == 7){
			handleseven();
		}else if(cntX == 6){
			handlesix();
		}else if(cntX == 5 || cntX == 4){
			update();	
			handle45();
		}
		update();
		cntX = getX();
	}
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
