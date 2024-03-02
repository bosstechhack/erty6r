import java.math.BigInteger;

public class divisibleby2 {
    public static void main(String[] args) {
        BigInteger num = new BigInteger("10000000000000000000000000000000000000000000000000"); 
        int count = 0;
        
        while (count < 10) {
            if (num.mod(BigInteger.valueOf(5)).equals(BigInteger.ZERO) || num.mod(BigInteger.valueOf(6)).equals(BigInteger.ZERO)) {
                System.out.println(num);
                count++;
            }
            num = num.add(BigInteger.ONE);
        }
    }
}
