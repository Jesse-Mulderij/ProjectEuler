#include <iostream>

using namespace std;
// Multiples of three and five
int main(){
    int sum=0;
    for(int ii = 0; ii<1000; ii++){
        if(ii%3==0 || ii%5 ==0){
            sum+=ii;
        }
    }
    cout << "The sum of all multiples of three or five up to 1000 is: " << sum << ".\n";
    
}