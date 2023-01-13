#include<iostream>
#include<iomanip>
using namespace std;

//Templete in C++  

template <typename T, typename U>
U add(T	x,U y)
{
	return x+y;
}



int main()
{

cout<<"Addition of 2 integer and double 2 and 4.5 is : "<<add<int,double>(2,4.5)<<endl;
cout<<"Addition of 2 float 5.5 and 6.5 is: "<<add<float,double>(5.5f,6.5)<<endl;
cout<<"Addition of 2 double 5.0256545 and 6.125588 is: "<<add<double,int>(5.0256,6);

return 0;
}

