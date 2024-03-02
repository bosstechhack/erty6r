import java.util.Random;
import java.util.Scanner;

public class all_same_random_matrix {
    static void display(int a[][]){
        int r=a.length;
        int c=a[0].length;
        int s,S;
        for (int i = 0; i < r; i++) {
            s=0;
            S=0;
            for (int j = 0; j < c; j++) {
                if(a[i][j]==0){
                    s++;

                }
                else if(a[i][j]==1){
                    S++;

                }
               
            }
            if(s==r){
                System.out.println("All 0s on row"+i);
            }
            else if(S==r){
                System.out.println("All 1s on row"+i);

            }
        }
        for (int i = 0; i < c; i++) {
            s=0;
            S=0;
            for (int j = 0; j < r; j++) {
                if(a[i][j]==0){
                    s++;
                }
                else if(a[i][j]==1){
                    S++;
                }
               
            }
            if(s==r){
                System.out.println("All 0s on column"+i);
            }
            else if(S==r){
                System.out.println("All 1s on column"+i);

            }
        }
        s=0;
        S=0;
        for(int i=0,j=c-1;j==i;i++,j--){
            
            if(a[i][j]==0){
             s++;
            }
            else if(a[i][j]==1){
                S++;
            }
        }
        if(s==4){
            System.out.println("0s same numbers on the sub-diagonal");

        }
        else if(S==4){
            System.out.println("1s same numbers on the sub-diagonal");
        }
        s=0;
        S=0;
        for(int i=0;i<r;i++){
            
            if(a[i][i]==0){
             s++;
            }
            else if(a[i][i]==1){
                S++;
            }
        }
        if(s==4){
            System.out.println(" 0s same numbers on the Major-diagonal");

        }
        else if(S==4){
            System.out.println(" 1s same numbers on the Major-diagonal");

        }


    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int[][] matrix = new int[r][c];
        Random random = new Random();

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = random.nextInt(2);
            }
        }
        sc.close();
    }
}
