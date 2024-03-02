class Circle2D{
    private double x;
    private double y;
    private double radius;
    Circle2D(){
        x=0;y=0;radius=1;
    }
    Circle2D(double x,double y,double radius){
        this.x=x;
        this.y=y;
        this.radius=radius;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getradius(){
        return radius;
    }
    double getArea(){
        return  3.14*radius*radius; 
    }
    double getPerimeter(){
        return 2*3.34*radius;
    }
     boolean contains(double x, double y) {
        return Math.sqrt(Math.pow(x - this.x, 2) + Math.pow(y - this.y, 2)) < radius;
    }

     boolean contains(Circle2D circle) {
        return Math.sqrt(Math.pow(circle.getX() - x, 2) + Math.pow(circle.getY() - y, 2)) + circle.getradius() <= radius;
    }

     boolean overlaps(Circle2D circle) {
        return Math.sqrt(Math.pow(circle.getX() - x, 2) + Math.pow(circle.getY() - y, 2)) < radius + circle.getradius();
    }
}


public class circle {
    public static void main(String[] args) {
        Circle2D c1 = new Circle2D(2, 2, 5.5);
        System.out.println("Area of c1: " + c1.getArea());
        System.out.println("Perimeter of c1: " + c1.getPerimeter());
        System.out.println("Contains point (3, 3): " + c1.contains(3, 3));
        System.out.println("Contains circle c2: " + c1.contains(new Circle2D(4, 5, 10.5)));
        System.out.println("Overlaps with circle c3: " + c1.overlaps(new Circle2D(3, 5, 2.3)));
    }
}
