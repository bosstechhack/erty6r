import java.util.Scanner;

public class Largest_Element {
    void largest(){
        Scanner sc=new Scanner(System.in);
        int s=sc.nextInt();
        float M;
        float arr[]=new float[s];
        for(int i=0;i<s;i++){
          arr[i]=sc.nextFloat();
          
        }
        M=arr[0];
        for(int i=0;i<s;i++){
            if(M<arr[i]){
                M=arr[i];
            }
            
          }
       
        System.out.println(M);
      sc.close();

    }
    public static void main(String[] args) {
        Largest_Element lr=new Largest_Element();
        lr.largest();
       
    }
}
