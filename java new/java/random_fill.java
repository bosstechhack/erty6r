import java.util.Scanner;
import java.util.Arrays;
import java.util.Random;

public class random_fill {
    static void max(int a1[][]){
        int p=0;
        int a2[]=new int [4];
        int a3[]=new int [4];
        for(int i=0;i<4;i++){
            p=0;
            for(int j=0;j<4;j++){
                p+=a1[i][j];
            }
            a2[i]=p;
        }
        for(int j=0;j<4;j++){
            p=0;
            for(int i=0;i<4;i++){
                p+=a1[i][j];
            }
            a3[j]=p;
        }
        int R=a2[0];
        int r=0,c=0;
        int C=a3[0];
        for(int i=0;i<4;i++){
            if(R<a2[i]){
                r=i;

            }
            if(C<a3[i]){
                c=i;
            }
        }
        System.out.println("The largest row index:"+ (r+1));
        System.out.println("The largest column index:"+ (c+1));

    }
public static void main(String[] args) {
     int[][] matrix = new int[4][4];
        Random random = new Random();

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrix[i][j] = random.nextInt(2);
            }
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
               System.out.print(matrix[i][j]);
            }
            System.out.println("\n");
        }
        max(matrix);

   
             
}
}
