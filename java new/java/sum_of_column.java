import java.util.Scanner;

public class sum_of_column {
    static void sum(float arr[][]){
        float sum=0;
        for(int i=0;i<4;i++){
            sum=0;
            for(int j=0;j<3;j++){
                sum+=arr[j][i];
            }
            System.out.println("Sum of the elements at column "+ i+ " is "+sum);
        }
        


    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float arr[][]=new float[3][4];
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=sc.nextFloat();
            }
            System.out.println("\n");
        }
        sum(arr);

        sc.close();

        
    }
}
