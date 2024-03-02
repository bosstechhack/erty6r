import java.util.Scanner;
public class ISBN {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
          int arr[]=new int[10];
          System.out.printf("Enter the first 9 digits of an ISBN as integer: ");
          for(int i=0;i<9;i++){
           arr[i]=sc.nextInt();
           }
           int sum=0;
          for(int i=1;i<10;i++){
              sum=arr[i-1]*i;
          }
          sum=sum%11;
          arr[9]=sum;
          System.out.printf("The ISBN-10 number is : ");
          for(int i=0;i<10;i++){
            System.out.printf(arr[i]+" ");
        }

         sc.close();
        
    }
}