import java.util.Scanner;

class linearequation{
    double a,b,c,d,e,f;
    linearequation(double a,double b,double c,double d,double e,double f){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
        this.e=e;
        this.f=f;
    }
      public  boolean isSolvable(){
        if((a*b)-(c*d)!=0){
            return true;

        }
        return false;

     }
     public double getX(){
        return ((e*d)-(b*f))/((a*d)-(b*c));
     }
     public double getY(){
        return ((a*f)-(e*c))/((a*d)-(b*c));
     }
}

public class lq2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double a,b,c,d,e,f;
        a=sc.nextDouble();b=sc.nextDouble();c=sc.nextDouble();d=sc.nextDouble();e=sc.nextDouble();f=sc.nextDouble();
        sc.close();
        linearequation l=new linearequation(a, b, c, d, e, f);
        if(!(l.isSolvable())){
            System.out.println("The Eqution has no solution");


        }
        else{
            System.out.println("value of X"+l.getX()+"value of y"+l.getY());
        }
    }
    
}
