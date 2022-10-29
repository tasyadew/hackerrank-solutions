//link: https://www.hackerrank.com/challenges/c-tutorial-strings/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    
    cout << a.length() << " " << b.length() << endl;
    cout << a+b << endl;
    
    string temp_a = a;
    a[0] = b[0];
    b[0] = temp_a[0];
    
    cout << a << " " << b;
    return 0;
}