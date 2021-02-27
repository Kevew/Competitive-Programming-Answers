#include <bits/stdc++.h>
using namespace std;

bool recur(int mag,int x,int y,int index){
	if(index == mag + 1){
		return false;
	}
	int tempx,tempy;
	tempx = x/pow(5,mag-index);
	tempy = y/pow(5,mag-index);
	if((tempx == 1 && tempy == 0) || (tempx == 2 && tempy == 0) || (tempx == 3 && tempy == 0) || (tempx == 2 && tempy == 1))
	{
		return true;
	}else if((tempx == 1 && tempy == 1) || (tempx == 2 && tempy == 2) || (tempx == 3 && tempy == 1)){
		return recur(mag,x-pow(5,mag-index)*tempx,y-pow(5,mag-index)*tempy,index+1);
	}else{
		return false;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,startx,starty;
		cin >> m >> startx >> starty;
		if(recur(m,startx,starty,1)){
			cout << "crystal" << endl;
		}else{
			cout << "empty" << endl;
		}
	}
}
