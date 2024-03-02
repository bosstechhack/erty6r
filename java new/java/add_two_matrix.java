import java.util.Scanner;

public class add_two_matrix {
    static void sum(float a1[][],float a2[][]){

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
             System.out.print(a1[i][j]+a2[i][j]);
            }
            System.out.println("\n");

    }
}
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float a1[][]=new float[3][3];
        float a2[][]=new float[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a1[i][j]=sc.nextFloat();
               
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a2[i][j]=sc.nextFloat();
               
            }
        }
        sc.close();
        sum(a1,a2);
        
    }
    
}
