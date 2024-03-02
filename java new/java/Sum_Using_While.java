import java.util.Scanner;

public class Sum_Using_While {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0;
         int a;
        do{
            a=sc.nextInt();
            sum+=a;

        }
        while(a!=-1);
        sc.close();
        System.out.println(sum+1);
    }
    
}