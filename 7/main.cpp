#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long int value){
    for(long int i=2; i<=sqrt(value); i++){
        if(value%i==0){return false;}
    }
    return true;
}

int main(){
    int counter = 0;
    int isPrimeCheck = 1;
    while(true){
        isPrimeCheck++;
        if(isPrime(isPrimeCheck)){
            counter++;
        }
        if(counter == 10001){
            break;
        }
    }
    cout << isPrimeCheck;

}