//link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = a; i <= b; i++){
        if(i < 10){
            cout << num[i-1] << endl;
        }else{
            if(i%2 == 0){
                cout << "even" << endl;
            }else{
                cout << "odd" << endl;
            }
        }
    }
    
    return 0;
}