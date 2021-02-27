#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		int un = a,on = 0,el = 0;
		int round = 0;
		while(el < a){
			cout << "Round " << round << ": " << un << " undefeated, " << on << " one-loss, " << el << " eliminated" << endl;
			if(un == 1 && on == 1){
				cout << "Round " << round+1 << ": 0 undefeated, 2 one-loss, " << el << " eliminated" << endl;
				cout << "Round " << round+2 << ": 0 undefeated, 1 one-loss, " << el+1 << " eliminated" << endl;
				round += 2;
				break;
			}
			el += on/2;
			on -= on/2;
			on += un/2;
			un -= un/2;
			round++;
		}
		cout << "There are " << round << " rounds." << endl << endl;
	}
}
