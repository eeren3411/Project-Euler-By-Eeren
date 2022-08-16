#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

long long int getSumPowerDigits(int number){
    long long int sum = 0;
    while(number>=1){
        int digit = number%10;
        long int powValue = pow(digit, 5);
        sum += powValue;

        number = number/10;
    }
    return sum;
}

int main(){
    long long int sum = 0;
    for(long int i=2; i<1000000; i++){
        if(i == getSumPowerDigits(i)){
            cout << i << "\n";
            sum += i;
        }
    }
    cout << sum;
}