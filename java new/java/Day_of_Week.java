import java.util.Scanner;
enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}

public class Day_of_Week {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
    
        int h;

        int q=sc.nextInt();
        int m=sc.nextInt();
        int y=sc.nextInt();
        int j=y/100;
        int k=y%100;
        sc.close();
        if(m==1&&m==2){
            m+=12;
        }
        h=(((q+26*(m+1)/10)+k+k/4+j/4+5*j)%7);
       
        switch (h) {
            case 0:
                System.out.println("Sunday");
                break;
            case 1:
                System.out.println("Monday");
                break;
            case 2:
            System.out.println("Tuesday");
            break;
            case 3:
            System.out.println("Wednesday");
            break; 
            case 4:
            System.out.println("Thrusday");
            break; 
            case 5:
            System.out.println("Friday");
            break;
            case 6:
            System.out.println("Saturday");
            break;    
                
        
            default:

                break;
        }

    }
}
