#link: https://www.hackerrank.com/challenges/py-if-else/

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())
    if n%2==1:
        print("Weird");
    else:
        if n in range(2,6):      #if (n>=2) and (n<=5)
            print("Not Weird");
        elif n in range(6,21):   #if (n>=6) and (n<=20)
            print("Weird");
        elif n>20:
            print("Not Weird");