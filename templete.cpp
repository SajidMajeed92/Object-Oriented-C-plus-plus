#include<iostream>
#include<iomanip>
using namespace std;

//Templete in C++  

template <typename T>
T add(T	x,T y)
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

