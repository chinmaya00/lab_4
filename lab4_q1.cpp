#include<iostream>
using namespace std;
int main()
{
//declaring variables
float a,b,c;
//input length in cm
cout << "enter length in cm";
cin >> a;
//convert cm to m and km
b = a/100;
c = a/100000;
//show output in terminal
cout << "length in m is" << b << endl;
cout << "length in km is" << c << endl;
return 0;
}
