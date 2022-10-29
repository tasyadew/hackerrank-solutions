//link: https://www.hackerrank.com/challenges/arrays-introduction/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin >> num;
    
    int arr[1000];
    
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    
    while(num){
        cout << arr[num-1] << " ";
        num--;
    }
      
    return 0;
}