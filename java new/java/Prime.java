import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     int n =sc.nextInt();
     sc.close();
     
     int count;
     int k=2;
     while(k<=n){
        int i=2;
        count=1;
        while(i<k){
            if(k%(i)==0){
                count=0;
                break;
            }
            i++;
        }
        if(count==1){
            System.out.println(k);
        }
        k++;

     }
    }
}
