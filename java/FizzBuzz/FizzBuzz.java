import java.util.*;
import java.io.*;

public class FizzBuzz {
    public static int X,Y,N;

    public static void main(String args []){

        Scanner input = new Scanner(System.in);
        X = input.nextInt();//first division checker
        Y = input.nextInt();//second division checker
        N = input.nextInt();//Number of elements

        for (int i = 1; i < N+1; i++) {
            if(i%X == 0 && i%Y == 0){
                System.out.println("FizzBuzz");
            }//check to see if the number can be divided by both values
            else if(i%X == 0) {
                System.out.println("Fizz");
            }//check to see if the number can be divided by the first number
            else if(i%Y == 0) {
                System.out.println("Buzz");
            }//check to see if the number can be divided by the second number
            else {
                System.out.println(i);
            }//if none can be divided then just print out the number
        }//for
    }//main
}//class
