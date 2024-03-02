abstract class GeometricShape{
    abstract double area();
    abstract double perimeter();

}
class trinagle extends GeometricShape{
    private double SideA=0;
    private double SideB=0;
    private double SideC=0;
    public void setA(double A){
       this.SideA=A; 
    }
    public double getA(){
        return SideA;
    }
    public void setB(double B){
        this.SideB=B; 
     }
     public double getB(){
         return SideA;
     }
     public void setC(double C){
        this.SideC=C; 
     }
     public double getC(){
         return SideC;
     }
     public double perimeter(){
        return (SideA+SideB+SideC)/3;


     }
     public double Area(){
        double s=(SideA+SideB+SideC)/2;
       return Math.sqrt((s-SideA)*(s-SideB)*(s-SideC));
     }


}
class Square extends GeometricShape{
    private double Side=0;
   
    public void setA(double A){
       this.Side=A; 
    }
    public double getA(){
        return Side;
    }
   
     public double perimeter(){
        return 4*Side;


     }
     public double Area(){
        
       return Side*Side;
     }


}
public class Q1G{
    public static void main(String[] args) {
        Square s1=new Square();
        trinagle t1=new trinagle();
        s1.setA(8);
        t1.setA(4);t1.setB(5);t1.setC(6.45);
        System.out.println("Arae of triangle  "+t1.Area()+"perimeter of triangle"+t1.perimeter());
        System.out.println("Arae of square  "+s1.Area()+"perimeter of square"+s1.perimeter());
    }
 }

