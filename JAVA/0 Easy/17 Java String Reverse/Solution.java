//link: https://www.hackerrank.com/challenges/java-string-reverse/

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        sc.close();
        
        /* Enter your code here. Print output to STDOUT. */
        String B="";
        
        for(int i = A.length(); i > 0; i--){
            if(i > 1){
                B += A.substring(i-1,i);
            }else{
                B += A.substring(0,1);
            }
        }
        
        if(A.equals(B)){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}
