import java.util.Scanner;

public class Nondecreasing_order {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int arr []=new int[3];
        for(int i=0;i<3;i++){
            arr[i]=sc.nextInt();
        }
        
        sc.close();
        for(int i=0;i<2;i++){
            int temp;
            
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        for(int i=0;i<3;i++){
            System.out.println(arr[i]);
        }
    }
}
