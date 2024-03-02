import java.util.Scanner;

public class location_of_largest_element {
    public static int[] locateLargest(double[][] a){
        int r=a.length;
        int c=a[0].length;
        System.out.println(r+" "+c);
        double temp=a[0][0];
        int C=0,R=0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if(temp<a[i][j]){
                    temp=a[i][j];
                    R=i;
                    C=j;

                }
                
            }
        }
        int arr[]={R,C};
        return arr ;
        



    }
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int r=sc.nextInt();
         int c=sc.nextInt();
        double a1[][] = new double[r][c];
       
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a1[i][j] = sc.nextDouble();
            }
        }
        sc.close();
        int a[]=locateLargest(a1);
        System.out.println(" The location of the largest element is at "+"("+a[0]+","+a[1]+")");
    }
    
    
}
