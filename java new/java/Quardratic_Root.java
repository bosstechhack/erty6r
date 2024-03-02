import java.util.Scanner;

public class Quardratic_Root {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        double a=sc.nextInt();
        double b=sc.nextInt();
        double c=sc.nextInt();
        double D=b*b-4*a*c;
        if(D<0){
            System.out.println("No Real Roots Exist");
        }
        else {
            double d=Math.pow(D,0.5);
            double R1=(-b+d)/2*a;
            double R2=(-b-d)/2*a;
            System.out.println(R1+" ");
            System.out.println(R2);

        }
        sc.close();

    }
}
