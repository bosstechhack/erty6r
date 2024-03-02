import java.util.Random;
import java.util.Scanner;

public class Rock_Paper_Scissor {
    public static void main(String[] args) {
        
        
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        Random random = new Random();
        int randomNumber = random.nextInt(3);
        sc.close();
        if(randomNumber==0 &&n==1){
            System.out.println("You Win!");
        }
        else if(randomNumber==0 && n==2){
            System.out.println("You lose");
        }
        else if(randomNumber==1 && n==2){
            System.out.println("You Win!");
        }
        else if(randomNumber== n){
            System.out.println("match draw");
        }
       
    }
}
