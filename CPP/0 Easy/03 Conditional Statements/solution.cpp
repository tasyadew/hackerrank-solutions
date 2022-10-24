//link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int input;
    cin >> input;
    
    if(input > 9){
        cout << "Greater than 9";
    }else{
        cout << num[input-1];
    }
    
    return 0;
}