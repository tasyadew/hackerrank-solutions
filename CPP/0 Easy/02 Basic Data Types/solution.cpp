//link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/

// int -> %i
// long -> %ld
// char -> %c
// float -> %f
// double -> %lf

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    
    scanf("%i %ld %c %f %lf", &i, &l, &c, &f, &d);
    
    printf("%i\n%ld\n%c\n%f\n%lf", i, l, c, f, d);
         
    return 0;
}