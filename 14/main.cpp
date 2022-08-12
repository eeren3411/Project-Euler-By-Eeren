#include <iostream>
using namespace std;

int cache[1000000] = {0};

long int chainCounter(long long int value){
    long long int realValue = value;
    long int chainCount = 0;
    while(value!=1){
        if(value < 1000000 && cache[value] != 0){
            cache[realValue] = chainCount + cache[value];
            return chainCount + cache[value];
        }
        chainCount++;
        if(value%2 == 0){
            value = value/2;
        }
        else{
            value = value*3+1;
        }
    }
    cache[realValue] = chainCount+1;
    return chainCount+1; //+1 for 1
}

int main(){
    long int maxChain = 0;
    long int maxChainNumber;

    for(long int i=1; i<=1000000; i++){
        long int chain = chainCounter(i);
        if(chain > maxChain){
            maxChain = chain;
            maxChainNumber = i;
        }
    }
    printf("%d -> %d", maxChainNumber, maxChain);
}