/**
 *
 * @author khamm
 */

import java.util.Scanner;


public class SolvingForCarrots {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x,y;
        x = input.nextInt();
        y = input.nextInt();
        
        String [] contestant = new String [x] ;
        
        for (int i = 0; i < x; i++) {
            contestant[i] = input.next();
        }
        
        System.out.println(y);
    }
    
}
