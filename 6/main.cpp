#include <iostream>
using namespace std;

long int sumOfSquares(int value){
    return value*(value+1)*(2*value+1)/6;
}

long int squareOfSums(int value){
    int total = value*(value+1)/2;
    return total*total;
}

int main(){
    cout << squareOfSums(100) - sumOfSquares(100);
}