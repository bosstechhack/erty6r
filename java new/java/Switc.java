import java.util.Scanner;

public class Switc {
    public static void main(String[] args) {
        Scanner Sn = new Scanner(System.in);
        int n;
        System.out.print("Enter the number\n");
        n=Sn.nextInt();
        switch(n){
            case 1:
            System.out.print("Ashish");
            break;
            case 2:
            System.out.print("Ranjan");
            break;
            case 3:
            System.out.print("good bye");
            default:
            System.out.println(0);

        }
        Sn.close();
    }
    
}
