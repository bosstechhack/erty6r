import java.util.Scanner;

class Location{
    int row;
    int column;
    double MaxValue;

    public static Location locateLargest(double a[][]){
        Location l=new Location();
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[i].length;j++){
                if(a[i][j]>l.MaxValue){
                    l.MaxValue=a[i][j];
                    l.row=i;
                    l.column=j;

                }
            }
        }
        return l;

    }
   
}

public class q1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        double p[][]= new double[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                p[i][j]=sc.nextDouble();
            }
        }
        sc.close();
        Location l = Location.locateLargest(p);
        System.out.println("Maxvalue "+l.MaxValue+"loaction :- {"+l.row+","+l.column+"}");
    
    

        
    }
    
}
