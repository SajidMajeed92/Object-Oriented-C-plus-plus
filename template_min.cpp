#include<iostream>
using namespace std;
template <typename T>
T mini(T x, T y){
	return x < y ? x:y;

}

int main(){
	cout<<"Mini:"<<mini(7,5)<<endl;
	cout<<"Mini:"<<mini(7.5,5.9)<<endl;
	cout<<"Mini:"<<mini<int>(7.7,5)<<endl;

return 0;
}

