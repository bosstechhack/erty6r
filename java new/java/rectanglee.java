class Rectangle{
    double height=1.0;
    double width=1.0;
    Rectangle(double w,double h){
        height=h;
        width=w;

    }
    double getArea(){
        return height*width;
    }
    double getPremeter(){
        return 2*(height+width);
    }
    void display(){
        System.out.println("width"+width+"\n"+"height"+height+"\n"+"Area"+getArea()+"\n"+"perimeter"+getPremeter()+"\n");
    }
}
public class rectanglee{
    public static void main(String[] args) {
        Rectangle r1,r2;
        r1=new Rectangle(4, 40);
        r2 =new Rectangle(35.9, 3.5);
        r1.display();
        r2.display();
    }
    
    
}


