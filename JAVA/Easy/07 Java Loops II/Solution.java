//link: https://www.hackerrank.com/challenges/java-loops/

import java.util.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int ans = 0;
            for(int z = 0; z < n; z++){
                ans += Math.pow(2,z)*b;
                System.out.print((a + ans) + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
