#include<iostream>
#include<iomanip>
using namespace std;

//Function Overloading 

int add(int x ,int y)
{
	return x+y;
}

float add(float x ,float y)
{
	return x+y; 
}

double add (double x ,double y)
{
	return x+y;
}

int main()
{

cout<<"Addition of 2 integer 2 and 4 is : "<<add(2,4)<<endl;
cout<<"Addition of 2 float 5.5 and 6.5 is: "<<add(5.5,6.5)<<endl;
cout<<"Addition of 2 double 5.0256545 and 6.125588 is: "<<add(5.0256,6.125);

return 0;
}

