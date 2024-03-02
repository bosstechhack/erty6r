import java.util.Scanner;

public class state_of_coin {
    static void display(int[] a1, String s1) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int index = i * 3 + j;
                int c = a1[8 - index];
                System.out.print(s1.charAt(c));
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        if(n>511&&n<0){
            System.out.println("Invalid input");
        }
        else{
        String s1="HT";
        int r;
     
        int a1[]=new int[9];
         for(int i=0;i<9;i++){
            r=n%2;
            n=n/2;
            a1[i]=r;
        }
        display(a1, s1);
        sc.close();
    }
}
}
