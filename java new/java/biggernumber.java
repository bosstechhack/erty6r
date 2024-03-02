import java.math.BigInteger;

public class biggernumber{
    public static void main(String[] args) {
        BigInteger maxLong = BigInteger.valueOf(Long.MAX_VALUE);
        BigInteger start = sqrt(maxLong).add(BigInteger.ONE);

        for (int count = 0; count < 10; start = start.add(BigInteger.ONE)) {
            BigInteger square = start.multiply(start);
            if (square.compareTo(maxLong) > 0) {
                System.out.println(square);
                count++;
            }
        }
    }
    public static BigInteger sqrt(BigInteger n) {
        BigInteger result = BigInteger.ZERO;
        BigInteger two = BigInteger.valueOf(2);

        BigInteger start = BigInteger.ONE.shiftLeft(n.bitLength() / 2);
        BigInteger end = start.add(BigInteger.ONE);
        while (start.compareTo(end) < 0) {
            result = start.add(end).divide(two);
            if (result.multiply(result).compareTo(n) > 0) {
                end = result;
            } else {
                start = result.add(BigInteger.ONE);
            }
        }
        return start.subtract(BigInteger.ONE);
    }
}
