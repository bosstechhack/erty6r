import java.util.Scanner;

abstract class GeometricObject {
    private String color;
    private boolean filled;

    public GeometricObject(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public boolean isFilled() {
        return filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }

    public abstract double getArea();

    public abstract double getPerimeter();
}

class Triangle extends GeometricObject {
    private double side1;
    private double side2;
    private double side3;

    public Triangle(double side1, double side2, double side3, String color, boolean filled) {
        super(color, filled);
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    public double getArea() {
  
        double s = (side1 + side2 + side3) / 2;
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }


    public double getPerimeter() {
        return side1 + side2 + side3;
    }
}

public class trangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter side 1 of the triangle: ");
        double side1 = sc.nextDouble();

        System.out.print("Enter side 2 of the triangle: ");
        double side2 = sc.nextDouble();

        System.out.print("Enter side 3 of the triangle: ");
        double side3 = sc.nextDouble();

        System.out.print("Enter the color of the triangle: ");
        String color = sc.next();

        System.out.print("Is the triangle filled? (true/false): ");
        boolean filled = sc.nextBoolean();

        Triangle triangle = new Triangle(side1, side2, side3, color, filled);

        System.out.println("Area of the triangle: " + triangle.getArea());
        System.out.println("Perimeter of the triangle: " + triangle.getPerimeter());
        System.out.println("Color of the triangle: " + triangle.getColor());
        System.out.println("Filled: " + triangle.isFilled());
    }
}
