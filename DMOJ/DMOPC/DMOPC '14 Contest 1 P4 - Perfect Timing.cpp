#include <bits/stdc++.h>
using namespace std;

int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int a,b;
	int c,d;
	cin >> a >> b >> c >> d;
	int N = abs(a-c)+abs(b-d);
	string temp;
	cin >> temp;
	int year = stoi(temp.substr(0,4));
	int month = stoi(temp.substr(5,2));
	int day = stoi(temp.substr(8,2));
	int hour = stoi(temp.substr(11,2));
	int minute = stoi(temp.substr(14,2));
	int second = stoi(temp.substr(17,2));
	while(N > 0){
		second++;
		N--;
		if(second == 60){
			second = 0;
			minute++;
			if(minute == 60){
				minute = 0;
				hour++;
				if(hour == 24){
					hour = 0;
					day++;
					if(year%4 == 0 && month==2 && day == 29){
						continue;
					}
					if(day == months[month]+1){
						month+=1;
						if(month == 13){
							month = 1;
							year++;
						}
						day = 1;
					}
				}
			}
		}
	}
	printf("%04d:%02d:%02d:%02d:%02d:%02d\n",year,month,day,hour,minute,second);
}
