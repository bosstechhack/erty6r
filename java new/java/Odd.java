import java.util.Scanner;

public class Odd {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        sc.close();
        for(int i=1;i<=a;i++){
         if(i%2!=0){
            System.out.println(i);
         }
        }
    }
}
