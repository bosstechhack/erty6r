import java.util.Scanner;

public class smallest {
    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a positive integer: ");
        int number = sc.nextInt();
        StackOfIntegers stack = new StackOfIntegers();
        int factor = 2;
        while (factor <= number) {
            if (number % factor == 0) {
                stack.push(factor);
                number /= factor;
            } else {
                factor++;
            }
        }
        System.out.print("Smallest factors in decreasing order: ");
        while (!stack.isEmpty()) {
            System.out.print(stack.pop() + " ");
        }
        sc.close();
    }
}

class StackOfIntegers {
     int[] elements;
     int size;
    public static final int DEFAULT_CAPACITY = 16;

     StackOfIntegers() {
        this(DEFAULT_CAPACITY);
    }

     StackOfIntegers(int capacity) {
        elements = new int[capacity];
    }
     void push(int value) {
        if (size >= elements.length) {
            int[] temp = new int[elements.length * 2];
            System.arraycopy(elements, 0, temp, 0, elements.length);
            elements = temp;
        }
        elements[size++] = value;
    }

     int pop() {
        return elements[--size];
    }

     int peek() {
        return elements[size - 1];
    }

     boolean isEmpty() {
        return size == 0;
    }

     int getSize() {
        return size;
    }
}
