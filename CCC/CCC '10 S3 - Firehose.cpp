#include <bits/stdc++.h>
using namespace std;

int houses[1010],N;
int STL = 1000000;

int cntHydrate(int hose){
	int diam = hose*2;
	
	int i = 0;
	int best = N;
	while(i < N && houses[i] <= houses[0]+diam){
		int cnt = 0;
		int currentEnd = houses[i];
		int j = i+1;
		while(j < N && houses[i] > houses[j]+diam-STL){
			if(houses[j] > currentEnd){
				cnt++;
				currentEnd = houses[j]+diam;
			}
			j++;
		}
		best = min(best,cnt);
		i=i+1;
	}
	return best;
}

int main(){
	cin >> N;
	for(int i = 0;i < N;i++){
		cin >> houses[i];
	}
	sort(houses,houses+N);
	int k;
	cin >> k;
	int low = -1,high = STL;
	while(high > (low+1)){
		int mid = (low+high)/2;
		if(cntHydrate(mid) >= k){
			low = mid;
		}else{
			high = mid;
		}
	}
	cout << high << endl;
	
} 	
