//link: https://www.hackerrank.com/challenges/java-static-initializer-block/

import java.util.*;

public class Solution {
    public static boolean flag = true;
    public static int B;
    public static int H;
    
    static {
        Scanner scn = new Scanner(System.in);
        B = scn.nextInt();
        H = scn.nextInt();
        scn.close();

        try{
            if(H <= 0 || B <= 0){
                flag = false;
                throw new Exception("Breadth and height must be positive");
                
            }
        }   
        catch(Exception e){
            System.out.println(e);
        }
    }

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class