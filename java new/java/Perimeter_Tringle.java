import java.util.Scanner;

public class Perimeter_Tringle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float a=sc.nextFloat();
        float b=sc.nextFloat();
        float c=sc.nextFloat();
        sc.close();
        if(a+b>=c&&b+c>=a&&a+c>=b){
            System.out.println(a+b+c);
        }
        else{
            System.out.println("Invalid tringle");
        }
        
    }
}
