import java.util.Scanner;

public class Transpose_of_matrix {

    void transpose(int arr[][],int r,int c ){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
              System.out.print(arr[j][i]);
            }
            System.out.println("\n");
        }
     
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int arr[][]= new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        sc.close();
        Transpose_of_matrix tp=new Transpose_of_matrix();
        tp.transpose(arr, r, c);
    }
}
