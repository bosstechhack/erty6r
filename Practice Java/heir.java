abstract class  shape{

   abstract String getDescription();

}
 abstract class TwodimentionalShape extends shape{
    abstract double getArea();

}
abstract class ThreeDimentionalShape extends shape{
    abstract double getArea();
    abstract double getVol();
}


class circle extends TwodimentionalShape{
    private   double radius;
    public circle(double radius){
        this.radius=radius;

    }
   
    double getArea() {
        return 3.14*radius*radius;
    }
    String  getDescription(){
        return "Circle with radius"+radius;
    }

}
class square extends TwodimentionalShape{
    private double side;
    public square(double side){
        this.side=side;


    }
    double getArea(){
        return side*side;
    }
    String getDescription(){
        return "Side side of square is"+ side;
    }
}
class Sphere extends ThreeDimentionalShape{
    private double radius;
    public Sphere(double radius){
        this.radius=radius;

    }
    double getArea(){
        return 3.14*4*radius*radius;
    }
    double getVol(){
        return (4*3.14*radius*radius*radius)/3;
    }
    String getDescription(){
        return "this sphere radiious "+ radius;
    }

}
class Box extends ThreeDimentionalShape {
    private double length, width, height;

    public Box(double length, double width, double height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }
    
   
    double getArea() {
        return 2 * ((length * width) + (length * height) + (width * height));
    }

    double getVol() {
        return length * width * height;
    }
   
   
    String getDescription() {
        return "Box with dimensions " + length + " x " + width + " x " + height;
    }
}







  public class heir {
    public static void main(String[] args){
        shape[] shapes = new shape[4];
        shapes[0] = new circle(5);
        shapes[1] = new square(7);
        shapes[2] = new Sphere(4);
        shapes[3] = new Box(3, 4, 5);
        for (shape shape : shapes) {
           
            System.out.println("Shape: " + shape.getDescription());
     
            if (shape instanceof TwodimentionalShape) {
               
                TwodimentionalShape twoDShape = (TwodimentionalShape) shape;
                System.out.println("Area: " + twoDShape.getArea());
            } else if (shape instanceof ThreeDimentionalShape) {
          
                ThreeDimentionalShape threeDShape = (ThreeDimentionalShape) shape;
                System.out.println("Surface Area: " + threeDShape.getArea());
                System.out.println("Volume: " + threeDShape.getVol());
            }
           
            System.out.println();
        }
    }
}


