public class prime1 {
    public static void main(String[] args) {
      
        StackOfIntegers stack = new StackOfIntegers();

        for (int i = 2; i < 120; i++) {
            if (isPrime(i)) {
                stack.push(i);
            }
        }

        System.out.println("Prime numbers less than 120 in decreasing order:");
        while (!stack.isEmpty()) {
            System.out.println(stack.pop());
        }
    }

    public static boolean isPrime(int number) {
        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}

class StackOfIntegers {
   int[] elements;
   int size;
    public static final int DEFAULT_CAPACITY = 16;

    public StackOfIntegers() {
        this(DEFAULT_CAPACITY);
    }

    public StackOfIntegers(int capacity) {
        elements = new int[capacity];
    }

    public void push(int value) {
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

    public int getSize() {
        return size;
    }
}
