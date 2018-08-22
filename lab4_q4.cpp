#include<iostream>
using namespace std;
int main(){
//declare variables
float DAY,WEEK,YEAR;
//enter days
cout << "no of days";
cin >> DAY;
//convert days into weeks and years
WEEK = DAY/7;
YEAR = DAY/365;
//display output
cout << "no of weeks is" << WEEK << endl;
cout << "no of years is" << YEAR << endl;
return 0;
}
