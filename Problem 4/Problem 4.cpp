#include <iostream>
#include <string>

using namespace std;
// Largest palindrome product

bool isPalindrome (int number){ 
    const string PotentialPalindrome = to_string(number);
    for(int ii=0; 2*ii < PotentialPalindrome.length(); ii++){
        if(PotentialPalindrome[ii]!=PotentialPalindrome[PotentialPalindrome.length()-ii-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int result=0;
    for (int f1 = 999; f1 >= 1; f1--){
        for(int f2 = 999; f2 >=1; f2--){
            if(f1*f2 > result && isPalindrome(f1*f2)){
                result = f1*f2;
                break;
            }
        }
    }
    cout << "The largest palindrome that is a product of two 3-digit numbers is: " << result << ".\n";
}