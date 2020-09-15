#include <iostream>

using namespace std;

// The 10001th prime number

bool isPrime(int number, int primes[], int counter){
    
    for(int ii=0; ii<= counter; ii++){
        if(primes[ii]*primes[ii] <= number && number % primes[ii] == 0 ){
            return false;
        }
    }
    return true;
}

int main(){
    int TheThPrime = 160000;
    int primes[TheThPrime];
    primes[0] = 2;
    int counter = 0;
    for(int ii = 3; counter<TheThPrime-1; ii++){
        if(isPrime(ii,primes,counter)){
            primes[counter+1] = ii;
            counter++;
        }
    }
    
    cout << "The 10001th prime number is: " << primes[TheThPrime-1] << ".\n";
}