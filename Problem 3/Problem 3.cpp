#include <iostream>
#include <cmath>
using namespace std;
// Largest prime factor
int main(){
    long BigNumber = 600851475143, CurrentLargestPrimeFactor=0, Candidate=2;
    while(Candidate * Candidate <= BigNumber){
        if(BigNumber % Candidate == 0){
            CurrentLargestPrimeFactor = Candidate;
            BigNumber/=Candidate;
        }
        else{
          Candidate++;  
        }
    }
    if(BigNumber > CurrentLargestPrimeFactor){
        CurrentLargestPrimeFactor = BigNumber;
    }
    cout << "The largest prime factor of 600851475143 is: " << CurrentLargestPrimeFactor << ".\n";
    return 0;
}