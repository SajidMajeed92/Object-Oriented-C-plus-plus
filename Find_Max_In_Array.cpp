#include<iostream>
using namespace std;
   
int main(){
    int inputArray[500], N, i, max;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> N;
    cout << "Enter " << N << " numbers\n";
      
    /* Read array elements */
    for(i = 0; i < N; i++){
        cin >> inputArray[i];
    }
      
    max = inputArray[0];
    /* traverse array elements */
    for(i = 1; i < N; i++){
        if(inputArray[i] > max)
            max = inputArray[i];
    }
      
    cout << "Maximum Element : " << max;
           
    return 0;
}
