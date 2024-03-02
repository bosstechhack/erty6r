import java.util.Scanner;

public class sum_of_array {
    void sum(){
        Scanner sc=new Scanner(System.in);
        int s=sc.nextInt();
        float sum=0;
        float arr[]=new float[s];
        for(int i=0;i<s;i++){
          arr[i]=sc.nextFloat();
          sum+=arr[i];
        }
       
        System.out.println(sum);
      sc.close();
    }
    public static void main(String[] args) {
        sum_of_array Sum=new sum_of_array();
        Sum.sum();
        
    }
}
