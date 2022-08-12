#include <iostream>
using namespace std;

int main(){
    long first = 1;
    long second = 2;
    long third = first+second;
    long sum = 2;
    while (third<4000000){
        first = second;
        second = third;
        third = first + second;
        if(third%2==0){
            sum+=third;
        }
    }
    cout << sum;
}