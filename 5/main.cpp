#include <iostream>
using namespace std;

bool isDivisible(long int value){
    return value%2==0 && value%3==0 && value%4==0 && value%5==0 && value%7==0 && value%8==0 && value%9==0 && value%11==0 && value%13==0 && value%16==0 && value%17==0 && value%19==0;
}

int main(){
    for(long int i=1; i++;){
        if(isDivisible(i)){
            printf("%ld\n", i);
            break;
        }
    }
}