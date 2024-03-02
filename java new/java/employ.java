import java.util.Scanner;
import java.util.Arrays;

public class employ {
    static void sum(int a2[],int a4[]){
        for(int i=7;i>=0;i--){
            System.out.println("Employee "+a4[i]+":"+a2[i]+"hours");
        }
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int arr[][]=new int[8][7];
        int a2[]=new int[8];
        int a3[]=new int[8];
        int a4[]=new int[8];
        int sum=0;
        for(int i=0;i<8;i++){
            sum=0;
            for(int j=0;j<7;j++){
                arr[i][j]=sc.nextInt();
                sum+=arr[i][j];
            }
            a2[i]=sum;
            a3[i]=sum;
            Arrays.sort(a2);
            for(int k=0;k<8;k++){
                for(int j=0;j<7;j++){
                    if(a2[k]==a3[j]){

                     a4[k]=j;
                    }
                 
                
                }
           
            }
    

        }
       
        sum(a2,a4);
        sc.close();
    }
}
