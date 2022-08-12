#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long int value){
    for(long long int test=2; test<=sqrt(value); test++){
        if(value%test == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long int target = 600851475143;
    long long int maxPrime = 0;
    for(long long int test = 2; test <= sqrt(target); test++){
        if(!isPrime(test)){continue;}
        if(target%test==0){maxPrime = test;}
    }
    cout << maxPrime;
}