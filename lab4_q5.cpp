#include<iostream>
using namespace std;
int main()
{
//declare variables
float A1,A2,A3;
//enter angle1
cout << "angle1 is";
cin >> A1;
//enter angle2
cout << "angle2 is";
cin >> A2;
//find angle3
A3 = 180 - A1 -A2;
//display output
cout << "angle3 is" << A3 << endl;
return 0;
}
