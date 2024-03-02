import java.util.Scanner;

public class consecutive_number_array {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int rows = scanner.nextInt();
        int columns = scanner.nextInt();

        int[][] array = new int[rows][columns];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                array[i][j] = scanner.nextInt();
            }
        }

        boolean result = isConsecutiveFour(array);

        System.out.println("The array contains four consecutive numbers: " + result);

        scanner.close();
    }

    public static boolean isConsecutiveFour(int[][] values) {
 
        for (int i = 0; i < values.length; i++) {
            for (int j = 0; j <= values[i].length - 4; j++) {
                if (values[i][j] == values[i][j + 1] &&
                    values[i][j] == values[i][j + 2] &&
                    values[i][j] == values[i][j + 3]) {
                    return true;
                }
            }
        }

        for (int j = 0; j < values[0].length; j++) {
            for (int i = 0; i <= values.length - 4; i++) {
                if (values[i][j] == values[i + 1][j] &&
                    values[i][j] == values[i + 2][j] &&
                    values[i][j] == values[i + 3][j]) {
                    return true;
                }
            }
        }

        for (int i = 0; i <= values.length - 4; i++) {
            for (int j = 0; j <= values[i].length - 4; j++) {
                if (values[i][j] == values[i + 1][j + 1] &&
                    values[i][j] == values[i + 2][j + 2] &&
                    values[i][j] == values[i + 3][j + 3]) {
                    return true;
                }
            }
        }

        for (int i = 0; i <= values.length - 4; i++) {
            for (int j = values[i].length - 1; j >= 3; j--) {
                if (values[i][j] == values[i + 1][j - 1] &&
                    values[i][j] == values[i + 2][j - 2] &&
                    values[i][j] == values[i + 3][j - 3]) {
                    return true;
                }
            }
        }
        return false;
    }
}
