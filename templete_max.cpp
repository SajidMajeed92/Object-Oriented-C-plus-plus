#include<iostream>
using namespace std;
template <typename P>
P maxm(P x, P y){
	return x>y ? x:y;
}
int main(){
	cout<<"Max:"<<maxm(8,5)<<endl;
	cout<<"Max:"<<maxm(7.5,5.9)<<endl;
	cout<<"Max:"<<maxm(7.7,5.5)<<endl;
return 0;
}
