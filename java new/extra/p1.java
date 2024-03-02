abstract class Shape {
    public abstract double calculateArea();
}

class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double calculateArea() {
        return length * width;
    }

    public void displayInfo() {
      
        System.out.println( calculateArea());
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double calculateArea() {
        return 3.14* radius * radius;
    }

    public void displayInfo() {
   
        System.out.println( calculateArea());
    }
}

public class p1 {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5, 3);

        System.out.println();
        rectangle.displayInfo();

        Circle circle = new Circle(4);
        circle.displayInfo();
    }
}
