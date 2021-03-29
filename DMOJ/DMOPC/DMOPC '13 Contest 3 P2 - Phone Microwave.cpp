#include <bits/stdc++.h>
using namespace std;

int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	int year = stoi(a.substr(0,4));
	int month = stoi(a.substr(5,2));
	int day = stoi(a.substr(8,2));
	int hour = stoi(b.substr(0,2));
	int minute = stoi(b.substr(3,2));
	int second = stoi(b.substr(6,2));
	while(n > 0){
		hour--;
		n--;
		if(hour == -1){
			hour = 23;
			day--;
			if(day == 0){
				month--;
				if(month == 0){
					month = 12;
					year--;
				}
				if(month == 2 && year%4 == 0){
					day = 29;
				}else{
					day = months[month];
				}
			}
		}
	}
	printf("%04d/%02d/%02d %02d:%02d:%02d\n",year,month,day,hour,minute,second);
}
