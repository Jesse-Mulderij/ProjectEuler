#include <iostream>

using namespace std;
// Sum square difference



int main(){
    int SumOfSquares=0;
    for(int ii=1; ii<=100; ii++){
        SumOfSquares+= ii*ii;
    }

    int result = 5050*5050 - SumOfSquares;

    
    cout << "The difference between the sum of squares and the square of the sum of numbers from 1 to 100 is: " << result << ".\n";
}