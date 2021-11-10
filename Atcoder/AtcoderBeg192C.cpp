#include <bits/stdc++.h>
using namespace std;

int main(){
	int num,cnt,big = 0,smoll = 0;
    string str;
    cin >> num >> cnt;
    for(int i = 0; i < cnt;i++){
        str = to_string(num);
        sort(str.begin(), str.end());
        smoll = atoi(str.c_str());
        sort(str.begin(), str.end(), greater<int>());
        big = atoi(str.c_str());
        num = big - smoll;
      	if (num == 0) {
            break;
        }
    }
    cout << num << endl;
    return 0;
}
