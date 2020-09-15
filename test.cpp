#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    
    int myArr[3] = {1,2,3};
    int *ptr=myArr;



    cout << &myArr[1] << endl;
    cout << &myArr[0] << endl;
     cout << myArr << endl;
    
}