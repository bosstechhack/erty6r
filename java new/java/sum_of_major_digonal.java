import java.util.Scanner;

public class sum_of_major_digonal {
    static void sumofmajordigonal(float arr[][]){
       float sum=0;
      for(int i=0;i<4;i++){
        sum+=arr[i][i];
      }
      System.out.println("Sum of the elements in the major diagonal is "+ sum);


    }
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
        float arr[][]=new float[4][4];
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=sc.nextFloat();
            }
            System.out.println("\n");
        }
        sumofmajordigonal(arr);

        sc.close();
        
        
    }
}
