
package qaly;


import java.util.Scanner;

public class QALY {
    //Quality-Adjusted Life-Years

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = 0;
        double a = 0;
        double b = 0;
        double sum =0;
        //if the input is N(1≤N≤100) store it in the x variable
        if(input.nextInt() > 0 || input.nextInt() < 101){
            x = input.nextInt();
        }
        
        //run the program for x times
        for(int y = 0; y < x ; y++){
            
            //if the input is less than 1 and greater than 0
            if(input.nextDouble() > 0 ||input.nextDouble() <= 1 )
                a = input.nextDouble();//get the user input for QALY q(0<q≤1) store in the temp a 
            
            //get thae user input for length of years if it is y(0<y≤100)
            if(input.nextDouble() > 0 || input.nextDouble() <= 100 )
                b = input.nextDouble();
            
            sum += a*b;            
        }//for
        
        System.out.printf("\n%.3f", sum);
        //I used %.3f to print 3 decimal places i used  because it works
    }//main
    
}//QALY
