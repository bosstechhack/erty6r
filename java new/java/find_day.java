import java.util.Scanner;
public class find_day {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("todays date :");
        int a=sc.nextInt();
        System.out.println("Enter the number of days elapsed since today:");
        int b=sc.nextInt();
        String s[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        int c=a%7;
        a=(a+b)%7;
        System.out.printf("Today is %s and the future day is %s",s[c],s[a]);
         sc.close();
        
    }
}