//link: https://www.hackerrank.com/challenges/java-primality-test/

// BigInteger - isProbablePrime(int certainty)
// int certainty = 1 (return true if prime number)

import java.io.*;
import java.math.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String n = bufferedReader.readLine();
        BigInteger a = new BigInteger(n);
        boolean prime = a.isProbablePrime(1);
        
        if(prime){
            System.out.println("prime");
        }else{
            System.out.println("not prime");
        }

        bufferedReader.close();
    }
}