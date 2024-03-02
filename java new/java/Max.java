import java.util.Scanner;

public class Max {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int arr[] = new int[3];
        for(int i=0;i<3;i++){
            arr[i]=sc.nextInt();
        }
       
        int d=sc.nextInt();
        sc.close();
        if(d==1){
            int temp=arr[0];
            for(int i=0;i<3;i++){
                if(temp<arr[i]){
                    temp=arr[i];
                }
            }
            System.out.println(temp);
        }
        else if(d==2){
            int tmp=arr[0];
            for(int i=0;i<3;i++){
                if(tmp>arr[i]){
                    tmp=arr[i];
                }
            }
            System.out.println(tmp);
        }

    }
}
