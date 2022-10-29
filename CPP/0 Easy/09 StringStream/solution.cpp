//link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch;
    int num;
    vector<int> v;
    
    while(ss>>num){
        v.push_back(num);
        ss>>ch;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}