#include <bits/stdc++.h>
using namespace std;

//THIS CODE DOES NOT WORK
//THIS CODE DOES NOT WORK
//THIS CODE DOES NOT WORK
//THIS CODE DOES NOT WORK
//THIS CODE DOES NOT WORK
//THIS CODE DOES NOT WORK
//I AM NOT GOING THROUGH EVERY ONE OF THESE IF STATEMENETS AGAIN

int dir[4][2] = {{0,-1},
				 {1,0},
				 {0,1},
				 {-1,0}};
				 
void toomanyifsstatements(int x,int y,int direction){
	if(x == y && x == 0){
		return;
	}else if(x > 0 && y > 0){
		if(direction == 0){
			cout << "1" << endl << abs(y) << endl << "2" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 1){
			cout << "2" << endl << "1" << endl << abs(y) << endl << "2" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 2){
			cout << "3" << endl << "1" << endl << abs(x) << endl << "3" << endl << "1" << endl << abs(y) << endl;
		}else{
			cout << "1" << endl << abs(x) << endl << "3" << endl << "1" << endl << abs(y) << endl;
		}
	}else if(x < 0 && y > 0){
		if(direction == 0){
			cout << "1" << endl << abs(y) << endl << "3" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 1){
			cout << "1" << endl << abs(x) << endl << "2" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 2){
			cout << "2" << endl << "1" << endl << abs(x) << endl << "2" << endl << "1" << endl << abs(y) << endl;
		}else{
			cout << "3" << endl << "1" << endl << abs(y) << endl << "3" << endl << "1" << endl << abs(x) << endl;
		}
	}else if(x > 0 && y < 0){
		if(direction == 0){
			cout << "2" << endl << "1" << endl << abs(x) << endl << "2" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 1){
			cout << "3" << endl << "1" << endl << abs(y) << endl << "3" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 2){
			cout << "1" << endl << abs(y) << endl << "3" << endl << "1" << endl << abs(x) << endl;
		}else{
			cout << "1" << endl << abs(x) << endl << "2" << endl << "1" << endl << abs(y) << endl;
		}
	}else if(x < 0 && y < 0){
		if(direction == 0){
			cout << "3" << endl << "1" << endl << abs(x) << endl << "3" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 1){
			cout << "1" << endl << abs(x) << endl << "3" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 2){
			cout << "1" << endl << abs(y) << endl << "2" << endl << "1" << endl << abs(x) << endl;
		}else{
			cout << "2" << endl << "1" << endl << abs(y) << endl << "2" << endl << "1" << endl << abs(x) << endl;
		}
	}else if(x == 0 && y > 0){
		if(direction == 0){	
			cout << "1" << endl << abs(y) << endl;
		}else if(direction == 1){
			cout << "2" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 2){
			cout << "3" << endl << "3" << endl << "1" << endl << abs(y) << endl;
		}else{
			cout << "3" << endl << "1" << endl << abs(y) << endl;
		}
	}else if(x == 0 && y < 0){
		if(direction == 0){
			cout << "3" << endl << "3" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 1){
			cout << "3" << endl << "1" << endl << abs(y) << endl;
		}else if(direction == 2){
			cout << "1" << endl << abs(y) << endl;
		}else{
			cout << "2" << endl << "1" << endl << abs(y) << endl;
		}
	}else if(x > 0 && y == 0){
		if(direction == 0){
			cout << "2" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 1){
			cout << "2" << endl << "2" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 2){
			cout << "3" << endl << "1" << endl << abs(x) << endl;
		}else{
			cout << "1" << endl << abs(x) << endl;
		}
	}else if(x < 0 && y == 0){
		if(direction == 0){
			cout << "3" << endl << "1" << endl << abs(x) << endl;
		}else if(direction == 1){
			cout << "1" << endl << abs(x) << endl;
		}else if(direction == 2){
			cout << "2" << endl << "1" << endl << abs(x) << endl;
		}else{
			cout << "3" << endl << "3" << endl << "1" << endl << abs(x) << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		int x = 0,y = 0,direction = 0;
		while(true){
			cin >> a;
			if(a == 0){
				break;
			}else if(a == 2){
				direction--;
				if(direction == -1){
					direction = 3;
				}
			}else if(a == 3){
				direction++;
				if(direction == 4){
					direction = 0;
				}
			}else{
				cin >> b;
				x += dir[direction][0]*b;
				y += dir[direction][1]*b;
			}
		}
		cout << "Distance is " << abs(x)+abs(y) << endl;
		toomanyifsstatements(x,y,direction);
		cout << endl;
	}
}
