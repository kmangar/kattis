
package r2;

/**
 *
 * @author khamm
 */

import java.util.Scanner;


public class R2 {
    
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int x = input.nextInt();//
        int y = input.nextInt();
        
        int s = y*2;
        s = s-x;
        
        System.out.println(s);
        
    }
    
}
