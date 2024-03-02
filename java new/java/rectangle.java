import java.util.Scanner;

class QuadraticEquation{
    double a,b,c;
      QuadraticEquation(double e,double f,double g){
        a=e;
        b=f;
        c=g;

    }
    double getDiscriminant(){
        return (b*b)-4*a*c;
    }
    double getRoot1(){
        double f=getDiscriminant();
        if(f<0){
            System.out.println("root does not exist");
            return 0;
        }
        else {
             return (-b + Math.sqrt(f)) / (2 * a);
        }

    }
    double getRoot2(){
        double f=getDiscriminant();
        if(f<0){
            System.out.println("root does not exist");
            return 0;
        }
        else {
             return (-b - Math.sqrt(f)) / (2 * a);
        }

    }
    
};


public class rectangle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double a,b,c;
        a=sc.nextDouble();
        b=sc.nextDouble();
        c=sc.nextDouble();
        sc.close();
        QuadraticEquation q1=new QuadraticEquation(a,b,c);
        double p=q1.getDiscriminant();
        if(p>0){
        System.out.println("root 1st ="+q1.getRoot1());
        System.out.println("root 2nd ="+q1.getRoot2());
        }
        else if(p==0){
            System.out.println("one root "+q1.getRoot1());
        }
        
    }
    
}
