#include<iostream>
using namespace std;
int main()
{
//declare variables
float f,c;
//enter temparature in farenheit
cout << "temparature in farenheit is";
cin >> f;
//convert farenheit into celsius
c = (f-32)*5/9;
//display output
cout << "temparature in celsius is" << c << endl;
return 0;
}
