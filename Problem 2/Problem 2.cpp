#include <iostream>

using namespace std;
// Even Fibonacci numbers
int main(){
    int f0=0, f1=1, f2, counter=0, sum=0;
    while(f2<4e6){
        if(counter%3==2){
            sum+=f2;
        }
        f2 = f1+f0;
        f0 = f1;
        f1 = f2;     
        counter++;   
    }
    cout << "The sum of all even Fibonacci numbers up to 4M is: " << sum << ".\n";
    
}