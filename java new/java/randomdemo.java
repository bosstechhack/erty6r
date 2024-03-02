import java.util.Random;

public class randomdemo {
    public static void main(String[] args) {
        Random rem=new Random(1000);
        for(int i=0;i<50;i++){
            int randomnum=rem.nextInt(100);
            System.out.println(randomnum);
        }
    }
    
}
