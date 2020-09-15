#include <iostream>
#include <cmath>
using namespace std;

// Special Pythagorean triplet

int main(){
    for(int aa = 1; aa <= 333; aa++){
        for(int bb = aa; bb <= 500; bb++){
            double cc = sqrt( aa * aa + bb * bb);
            if( cc - (int) cc == 0 && aa + bb + cc == 1000){
                cout << "The product of the Pythagorean triple that sums to 1000 is: " << aa * bb * cc << ".\n";
                return 0;
            }
        }
        
        
    }
    
    
    
    
}