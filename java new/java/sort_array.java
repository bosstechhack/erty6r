import java.util.Arrays;
import java.util.Scanner;

public class sort_array {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int array[][] = new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                array[i][j]=sc.nextInt();
            }
        }
       

        System.out.println("Original Array:");
        printArray(array);

        sort(array);

        System.out.println("\nSorted Array:");
        printArray(array);
        sc.close();
    }

    public static void sort(int[][] m) {
        // Primary sort on rows
        Arrays.sort(m, (row1, row2) -> {
            if (row1[0] != row2[0]) {
                return Integer.compare(row1[0], row2[0]);
            } else {
                // Secondary sort on columns
                return Integer.compare(row1[1], row2[1]);
            }
        });
    }

    public static void printArray(int[][] m) {
        for (int[] row : m) {
            System.out.println(Arrays.toString(row));
        }
    }
}
