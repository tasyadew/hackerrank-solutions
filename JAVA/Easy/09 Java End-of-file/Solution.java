//link: https://www.hackerrank.com/challenges/java-end-of-file/

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scn = new Scanner(System.in);
        int count = 1;
        
        while(scn.hasNext()){
            System.out.println(count + " " + scn.nextLine());
            count++;
        }
        scn.close();
    }
}