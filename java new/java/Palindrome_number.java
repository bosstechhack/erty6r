import java.util.Scanner;

public class Palindrome_number {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        int o=n;
        int sum=0;
        while(o!=0){
            int p=(o%10);
            sum=sum*10+p;
             
            
             o= o/10;
        }
        if(sum==n){
            System.out.println("palindrome number");
        }
        else{
            System.out.println("not a palindrome number");
        }
    }
}
