import java.util.Scanner;

public class Day_of_month {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int m=sc.nextInt();
        int y=sc.nextInt();
        if(m==1||m==3||m==5||m==7||m==8||m==12||m==10){
            System.out.println("31");

        }
        else if(m==4||m==6||m==9||m==11){
            System.out.println("30");
        }
        else if(m==2&&y%4==0){
            System.out.println("29");
            
        }
        else{
            System.out.println("28");
        }
        sc.close();

    }
}
