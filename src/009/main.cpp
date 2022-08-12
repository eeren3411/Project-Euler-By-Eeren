#include <iostream>
#include <math.h>
using namespace std;

int hip(int a, int b){
    double result = sqrt(a*a+b*b);
    if (floor(result) == result){
        return result;
    }
    return -1;
}

int main(){
    int i, j, k;
    for(i=1; i<1000; i++){
        for(j=i; j<1000; j++){
            k = hip(i, j);
            if(k == -1){continue;}
            if(i+j+k == 1000){
                printf("%d %d %d\n", i, j, k);
                cout << i*j*k;
                break;
            }
        }
    }
}