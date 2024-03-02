public class ccommandLineArgument {
    public static void main(String[] args) {
        if (args.length != 3) {
            System.out.println("Usage: java ccommandLineCalculator <operand1> <operator> <operand2>");
            return;
        }

        double operand1 = Double.parseDouble(args[0]);
        String operator = args[1];
        double operand2 = Double.parseDouble(args[2]);

        double result;

        switch (operator) {
            case "+":
                result = operand1 + operand2;
                break;
            case "-":
                result = operand1 - operand2;
                break;
            case "*":
                result = operand1 * operand2;
                break;
            case "/":
                if (operand2 == 0) {
                    System.out.println("Division by zero is not allowed");
                    return;
                }
                result = operand1 / operand2;
                break;
            default:
                System.out.println("Invalid operator: " + operator);
                return;
        }

        System.out.println("Result: " + result);
    }
   
}
