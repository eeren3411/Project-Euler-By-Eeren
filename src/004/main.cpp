#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(long int value){
    string valueString = to_string(value);
    for(int i=0; i<valueString.length()/2; i++){
        if(valueString[i] != valueString[valueString.length()-1-i]){return false;}
    }

    return true;
}

int main(){
    int result = 0;
    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            int tempResult = i*j;
            if(isPalindrome(tempResult) && tempResult > result){
                result = tempResult;
            }
        }
    }
    cout << result;
}