/*  Sum of Array using function template  */

#include <iostream>

using namespace std;


template<class T> T sum(T a[], int length)
{
        T result = a[0];
        for (int i = 1; i < length; i ++)
                result += a[i];

        return result;
}

int main(void) {
        int int_data[5];
        float float_data[5];
        int i = 0;

        // input 5 integers
        cout << "\nInput 5 integers :: \n" << endl;
        for (; i < 5; i++)
                cin >> int_data[i];
        // print sum of 5 integers
        cout << "\nSum of above is :: " << sum(int_data, 5) << endl;

        // input 5 float numbers
        cout << "\nInput 5 floats :: \n" << endl;
        for (i = 0; i < 5; i ++)
                cin >> float_data[i];
        // print sum of 5 float numbers
        cout << "\nSum of above is :: " << sum(float_data, 5) << endl;

        cin.get();
        return 0;
}

