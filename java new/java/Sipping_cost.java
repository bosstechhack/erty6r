import java.util.Scanner;

public class Sipping_cost {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Weight of Package");
        float w=sc.nextFloat();
        sc.close();
        System.out.println("Cost of shipping");
        if(w>0&&w<=1){
            System.out.println("3.5");
        }
        else if(w>1&&w<=3){
            System.out.println("5.5");
        }
        else if(w>3&&w<=10){
            System.out.println("8.5");
        }
        else if(w>10&&w<=50){
            System.out.println("10.5");
        }
        else{
            System.out.println("package cannot be be shipped");
        }
        

        
    }
}
