import java.util.Scanner;

public class Cramers_rule {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        float a=sc.nextInt();
        float b=sc.nextInt();
        float c=sc.nextInt();
        float d=sc.nextInt();
        float e=sc.nextInt();
        float f=sc.nextInt();
        sc.close();
        float D=((a*d)-(b*c));
        if(D==0){
            System.out.println("The  equation has no solution");

        }
        else{
            
            float x=(e*d-b*f);
            float y=(a*f-c*e);
            float X=x/D;
            float Y=y/D;
            System.out.println("X="+ X+" Y="+Y);
            
        
        }


    }
}
