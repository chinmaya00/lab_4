#include<iostream>
using namespace std;
int main()
{
//declare variables
float m1,m2,m3,m4,m5,T,A,P;
//enter marks
cout << "m1";
cin >> m1;
cout << "m2";
cin >> m2;
cout << "m3";
cin >> m3;
cout << "m4";
cin >> m4;
cout << "m5";
cin >> m5; 
//calculate total,avg,percent
T = m1 + m2 + m3 + m4 + m5;
A = (m1 + m2 + m3 + m4 + m5)/5;
P = (m1 + m2 + m3 + m4 + m5)/500 * 100;
//display result
cout << "total mark is" << T << endl;
cout << "average mark is" << A << endl;
cout << "percentage mark is" << P << endl;
}
