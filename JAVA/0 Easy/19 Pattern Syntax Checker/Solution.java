//link: https://www.hackerrank.com/challenges/pattern-syntax-checker/

import java.util.Scanner;
import java.util.regex.*;

public class Solution
{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		while(testCases>0){
			String pattern = in.nextLine();

            boolean flag = true;
            try{
                Pattern.compile(pattern);
            }catch(Exception e){
                System.out.println("Invalid");
                flag = false;
            }
            
            if(flag == true){
                System.out.println("Valid");
            }
            
            testCases--;
		}
        in.close();
	}
}