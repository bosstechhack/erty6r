import java.lang.Math;

class MyPoint {
 double x;
  double y;

    public MyPoint() {
        this.x = 0;
        this.y = 0;
    }

    public MyPoint(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double distance(MyPoint point) {
        return Math.sqrt(Math.pow(x - point.getX(), 2) + Math.pow(y - point.getY(), 2));
    }

    public double distance(double x, double y) {
        return Math.sqrt(Math.pow(this.x - x, 2) + Math.pow(this.y - y, 2));
    }
}

public class point {
    public static void main(String[] args) {

        MyPoint point1 = new MyPoint(0, 0);
        MyPoint point2 = new MyPoint(10.0, 30.5);

        double distance = point1.distance(point2);
        System.out.printf("%.4f%n", distance);
    }
}
