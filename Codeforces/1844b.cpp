#include <bits/stdc++.h>
using namespace std;

int arr[200000];

int main(){
    int i;
    int t,n;
    cin >> t;
    while (t--) {
       	cin >> n;
        if(n == 1){
        	cout << "1" << endl;
		}
        else if(n == 2){
        	cout << "1 2" << endl;
		}else{
            int c = 4;
            fill(arr,arr+n,0);
            arr[0] = 2,arr[n/2] = 1,arr[n-1] = 3;
            for(i = 0; i < n; i++){
                if (arr[i] == 0){
                	arr[i] = c++;
				}
            }
            for(i = 0; i < n; i++) printf("%d%c",arr[i],(i == n-1) ? '\n':' ');
        }
    }
}
