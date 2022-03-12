#include <bits/stdc++.h>
using namespace std;

int arr[10][10];
int arr2[10][10];


int main(){
	int n,m;
	cin >> n >> m;
	
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		arr[a][b] = arr[b][a] = 1;
	}
	
	for(int i = 0;i < m;i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		arr2[a][b] = arr2[b][a] = 1;
	}
	int perm[n];
	for(int i = 0;i < n;i++){
		perm[i] = i;
	}
	do{
		bool work = true;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				if(arr[i][j] != arr2[perm[i]][perm[j]]){
					work = false;
					break;
				}
			}
		}
		if(work){
			cout << "Yes" << endl;
			return 0;
		}
	}while(next_permutation(perm,perm+n));
	cout << "No" << endl;
}
