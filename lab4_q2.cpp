#include<iostream>
using namespace std;
int main()
{
//declare variables
float c,f;
//enter temperature in celsius
cout << "temperature in celsius is";
cin >> c;
//convert celsius to farenheit
f = 1.8*c + 32;
//show output
cout << "temperature in farenheit is" << f << endl;
return 0;
}
