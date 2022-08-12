#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(long int value){
    for(long int i=2; i<=sqrt(value); i++){
        if(value%i==0){
            return false;
        }
    }
    return true;
}

int final(){
    long long int sum = 0;
    for(long int i=2; i<2000000; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}

int test(){
    cout << isPrime(2000000);
    return 0;
}

int main(){
    final();
}