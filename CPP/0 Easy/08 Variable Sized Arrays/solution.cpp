//link: https://www.hackerrank.com/challenges/variable-sized-arrays/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_index, queries;
    cin >> num_index >> queries;
    
    vector<vector<int>> v(num_index);
    
    for(int i = 0; i < num_index; i++){
        int size;
        cin >> size;
        for(int j = 0; j < size; j++){
            int input;
            cin >> input;
            v[i].push_back(input);
        }
    }
    
    for(int k = 0; k < queries; k++){
        int a, b;
        cin >> a >> b;
        cout << v[a][b] << endl;
    }
    return 0;
}