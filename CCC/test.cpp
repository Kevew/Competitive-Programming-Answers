#include <bits/stdc++.h>
using namespace std;

long long blood[8];
long long patient[8];


long long holding[8];
long long holdingsecond[8];


long long check(long long a,long long b){
	long long minimum = min(blood[a],patient[b]);
	blood[a] -= minimum;
	patient[b] -= minimum;
	return minimum;
}

int main(){
	for(long long i = 0;i < 8;i++){
		cin >> blood[i];
	}
	for(long long i = 0;i < 8;i++){
		cin >> patient[i];
	}
	long long curr = 0;
	
	
	for(int i = 0;i < 8;i++){
		curr += check(i,i);
	}
	
	for(int i = 0;i < 4;i++){
		curr += check(2*i,2*i+1);
	}
	
	curr += check(3, 7) + check(5, 7); // A/B+ to AB+
    curr += check(2, 6) + check(4, 6); // A/B- to AB-
    curr += check(2, 7) + check(4, 7); // A/B- to AB+
    curr += check(0, 2) + check(0, 4); // O- to A/B-
    curr += check(1, 3) + check(1, 5); // O+ to A/B+
    curr += check(0, 3) + check(0, 5); // O- to A/B+
    curr += check(0, 6) + check(1, 7) + check(0, 7); // O- to AB-, O+ to AB+, O- to AB+
    cout << curr << endl;
}
