#include <iostream>
#include <math.h>
using namespace std;

int divisorCount(long long int value){
    int counter = 0;
    for(int i=1; i<=sqrt(value); i++){
        if(value%i==0){
            if(value/i == i){
                counter++;
            }
            else{
                counter+=2;
            }
        }
    }
    return counter;
}

int main(){
    long long int triangle = 0;
    long int increment = 1;
    while(divisorCount(triangle) < 500){
        triangle+=increment;
        increment++;
    }
    cout << triangle;
}