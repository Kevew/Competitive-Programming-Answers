#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int p1,p2,p3;
	cin >> p1 >> p2 >> p3;
	int time = 0;
	while(a > 0){
		a--;
		if(time%3 == 0){
			p1++;
			if(p1 == 35){
				a+=30;
				p1 = 0;
			}
		}else if(time%3 == 1){
			p2++;
			if(p2 == 100){
				a+=60;
				p2 = 0;
			}
		}else{
			p3++;
			if(p3 == 10){
				a+=9;
				p3 = 0;
			}
		}
		time++;
	}
	cout << "Martha plays " << time << " times before going broke." << endl;
}
