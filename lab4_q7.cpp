#include<iostream>
using namespace std;
#include<math.h>
int main()
{ 
//declare variables
float S,A;
//enter length of side
cout << "what is the length of the side?";
cin >> S;
//calculate area
A = sqrt(3)/4*(S*S);
//display output
cout << "the area of equilateral triangle is" << A << endl;
}
