//link: https://www.hackerrank.com/challenges/java-string-tokens/

// String.trim() can ignore leading & trailing spaces
// example:
// "        Hello world          " => "Hello World"
// String.split(regex) will split word based on regex
// example:
// "Hello, World" => "Hello" "World" (split comma)

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        scan.close();
        // Write your code here.
        s = s.trim();
        String[] arr = s.split("[!,?._'@ ]+");
        
        // if string is null
        if(s.length() == 0){
            System.out.println("0");
        }
        else{
            System.out.println(arr.length);
        }
        
        // print split words in array
        for(String a : arr){
            System.out.println(a);
        }
    }
}