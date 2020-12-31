#include <bits/stdc++.h>
using namespace std;

int x[1000010],y[1000010],cnt = 0;
bool visited[1010][1010];
int arr[1010][1010];
int n,m;

void add(int a,int b){
	if(a > n || b > m || visited[a][b]){
		return;
	}
	visited[a][b] = true;
	x[cnt] = a;
	y[cnt] = b;
	cnt++;
}

void remove(int &a, int &b){
	a = x[cnt-1];
	b = y[--cnt];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> arr[i][j];
		}
	}
	
	add(1,1);
	while(cnt > 0){
        int x, y;
		remove(x, y);
        if(x == n && y == m){
        	break;
		}
        for (int i = 1;i * i <= arr[x][y]; i++) {
            if (arr[x][y] % i == 0) {
                int j = arr[x][y] / i;
                add(i, j);
                add(j, i);
            }
        }
    }
	
	
	
	if(visited[n][m]){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
}
