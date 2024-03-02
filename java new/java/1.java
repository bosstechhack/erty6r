import java.util.Scanner;
public class month_day {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
          int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
          String[] months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
          System.out.printf(" enter the month and year : ");
          int x=sc.nextInt();
          int y=sc.nextInt();
          switch (x) {
            case 0,2,4,6,7,9,11 :
               System.out.println(months[x-1]+" "+y+" had "+arr[x-1]);
                break;
             case 3,5,8,10:
             System.out.println(months[x-1]+" "+y+" had "+arr[x-1]);
                break;
                case 1:
                if(y%4==0) arr[x-1]++;
                System.out.println(months[x-1]+" "+y+" had "+arr[x-1]);
                break;
          }
          
         sc.close();
        
    }
}