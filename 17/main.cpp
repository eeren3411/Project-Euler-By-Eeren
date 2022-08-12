#include <iostream>
#include <math.h>
using namespace std;

string intToStr(int number, int level){
    int digitSegmenter = pow(10, level);
    int testValue = number / digitSegmenter;
    int remainder = number % digitSegmenter;
    if(testValue == 0){
        if(level == 0){return "";}
        return intToStr(remainder, level-1);
    }
    else if(number == 10){
        return "Ten";
    }
    else if(number == 11){
        return "Eleven";
    }
    else if(number == 12){
        return "Twelve";
    }
    if(level == 3){
        return intToStr(testValue, 0) + "Thousand" + intToStr(remainder, level-1); 
    }
    else if(level == 2){
        string remString = intToStr(remainder, level-1);
        if(!remString.compare("")){
            return intToStr(testValue, 0) + "Hundred";
        }
        else{
            return intToStr(testValue, 0) + "HundredAnd" + remString;
        }
    }
    else if(level == 1){
        switch(testValue){
            case 0: return "";
            case 1: {
                switch(remainder){
                    case 3: return "Thirteen";
                    case 5: return "Fifteen";
                    case 8: return "Eighteen";
                    default: return intToStr(remainder, level-1) + "teen";
                }
            }
            case 2: return "Twenty" + intToStr(remainder, level-1);
            case 3: return "Thirty" + intToStr(remainder, level-1);
            case 4: return "Forty" + intToStr(remainder, level-1);
            case 5: return "Fifty" + intToStr(remainder, level-1);
            case 8: return "Eighty" + intToStr(remainder, level-1);
            default: return intToStr(testValue, 0) + "ty" + intToStr(remainder, level-1);
            
        }
    }
    else if(level == 0){
        switch(testValue){
            case 0: return "";
            case 1: return "One";
            case 2: return "Two";
            case 3: return "Three";
            case 4: return "Four";
            case 5: return "Five";
            case 6: return "Six";
            case 7: return "Seven";
            case 8: return "Eight";
            case 9: return "Nine";
        }
    }
    return "";
}

int answer(){
    long int totalChars = 0;
    for(int i=0; i<=1000; i++){
        cout << intToStr(i, 3) << "\n";
        totalChars += intToStr(i, 3).length();
    }
    cout << totalChars << "\n";
    return 0;
}

int main(){
    answer();
}