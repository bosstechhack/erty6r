import java.util.Scanner;

public class multiple_matricx {
    static void multiply(double a1[][], double a2[][]) {
        double p;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                p = 0; 
                for (int k = 0; k < 3; k++) {
                    p = p + a1[i][k] * a2[k][j];
                }
                System.out.print(p + " ");
            }
            System.out.println("\n");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a1[][] = new double[3][3];
        double a2[][] = new double[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a1[i][j] = sc.nextDouble();
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a2[i][j] = sc.nextDouble();
            }
        }

        sc.close();
        multiply(a1, a2);
    }
}
