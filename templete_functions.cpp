#include <iostream>
using namespace std;
 
// class template:
template <class T>
class myIncrement {
  T value;
  public:
  myIncrement (T arg) {value=arg;}
  T toIncrement () {return ++value;}
};
// class template specialization:
template <>
class myIncrement <char> {
   char value;
  public:
   myIncrement (char arg) {value=arg;}
   char uppercase ()
  {
    if ((value>='a')&&(value<='z'))
    value+='A'-'a';
    return value;
  }
};
int main () {
  myIncrement<int> myint (7);
  myIncrement<char> mychar ('s');
  myIncrement<double> mydouble(11.0);
  
  cout<<"Incremented int value: "<< myint.toIncrement()<< endl;
  cout<<"Uppercase value: "<<mychar.uppercase()<< endl;
  cout<<"Incremented double value: "<<mydouble.toIncrement()<< endl;
  return 0;
}
