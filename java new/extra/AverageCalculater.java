public class AverageCalculater {
    public static double calculateAverage(int... inputs) {
        if (inputs.length == 0) {
            return 0.0; 
        }

        int sum = 0;
        for (int num : inputs) {
            sum += num;
        }

        return (double) sum / inputs.length; 
    }

    public static void main(String[] args) {
        double average1 = calculateAverage(5, 10, 15, 20, 25);
        System.out.println("Average 1: " + average1);

        double average2 = calculateAverage(2, 4, 6, 8, 10, 12, 14);
        System.out.println("Average 2: " + average2); 

        double average3 = calculateAverage(1, 3, 5);
        System.out.println("Average 3: " + average3); 
    }
}
