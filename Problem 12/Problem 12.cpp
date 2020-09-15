#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

//

vector<int> Zeef(int number){
    vector<int> numbers(number);
    int NewZeros=0;
    for(int ii=2; ii < number+2; ii++){ numbers[ii]= ii; }

    for(int ii = 2; ii * ii < number; ii++){
        for(int jj = ii+1; jj < number; jj++){
            if ( numbers[jj] != 0 && numbers[jj] % ii == 0){
                numbers[jj] =0;
                NewZeros++;
            }
        }
    }
    vector<int> primelist(number - NewZeros);
    
    int counter=0;
    for(int ii=0; ii < number; ii++){
        if(numbers[ii] != 0){
            primelist[counter]=numbers[ii];
            counter++;
        }
    }
    return primelist;
}

int NumberOfDivisors( int number, vector<int> primes){
    vector<int> primepowers(primes.size());

    for(int ii=0; primes[ii]<=number; ii++){
        if(number % primes[ii]==0){
            primepowers[ii]++;
            number /= primes[ii];
            ii--;
        }
    }
    int result = 1;
    for(int ii=0; ii < primepowers.size(); ii++){
        if(primepowers[ii]!=0){
            result *= (primepowers[ii]+1);
        }
    }
    return result;
}


int main(){
    int factor1 = 1;
    int factor2 = 2;
    int numberofdivisors=0;
    vector<int> primes = Zeef(100000);
    while( numberofdivisors < 500 ){
        factor1++;
        factor2++;
        if(factor1%2==0){
            numberofdivisors = NumberOfDivisors(factor1/2, primes) * NumberOfDivisors(factor2, primes);
        }
        else{
            numberofdivisors = NumberOfDivisors(factor1, primes) * NumberOfDivisors(factor2/2, primes);
        }

    }
    cout << "The first triangular number that has more than 500 divisors is: " << factor1 * factor2 / 2 << ", which has " << numberofdivisors << " divisors" << ".\n";
} 