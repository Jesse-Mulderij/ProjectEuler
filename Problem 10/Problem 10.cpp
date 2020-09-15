#include <iostream>

using namespace std;

// The sum of the prime numbers up to 2e6 is

bool isPrime(int number, long primes[], int counter){
    
    for(int ii=0; ii<= counter; ii++){
        if(primes[ii]*primes[ii] <= number && number % primes[ii] == 0 ){
            return false;
        }
    }
    return true;
}

int main(){
    int TheThPrime = 160000;
    long primes[TheThPrime];
    long sum=0;
    primes[0] = 2;
    int counter = 0;
    for(int ii = 2; counter<TheThPrime-1 && ii < 2e6; ii++){
        if(isPrime(ii,primes,counter)){
            primes[counter+1] = ii;
            counter++;
            sum += ii;
        }
    }
    
    cout << "The sum of primes up to two million is: " << sum << ".\n";
}