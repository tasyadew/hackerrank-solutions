//link: https://www.hackerrank.com/challenges/java-biginteger/

import java.util.*;
import java.math.*;


public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scn = new Scanner(System.in);
        BigInteger A, B;
        A = scn.nextBigInteger();
        B = scn.nextBigInteger();
        scn.close();
        
        System.out.println(A.add(B));
        System.out.println(A.multiply(B));
    }
}