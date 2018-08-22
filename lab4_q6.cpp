#include<iostream>
using namespace std;
int main()
{
//declare variables
float h,b,a;
//enter base
cout << "the base of triangle is ";
cin >> b;
//enter height
cout << "the height of triangle is";
cin >> h; 
//calculate area
a = .5*b*h;
//display result
cout << "the area of triangle is" << a << endl;
return 0;
}
