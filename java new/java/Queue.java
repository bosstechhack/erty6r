public class Queue {
    private int[] elements;
    private int size;
    private int capacity;

    public Queue() {
        capacity = 8;
        elements = new int[capacity];
    }

    public void enqueue(int v) {
        if (size >= capacity) {
            // Double the capacity
            capacity *= 2;
            int[] newElements = new int[capacity];
            System.arraycopy(elements, 0, newElements, 0, size);
            elements = newElements;
        }
        elements[size++] = v;
    }

    public int dequeue() {
        if (size == 0) {
            throw new IllegalStateException("Queue is empty");
        }
        int firstElement = elements[0];
        // Shift elements to the left
        for (int i = 1; i < size; i++) {
            elements[i - 1] = elements[i];
        }
        size--;
        return firstElement;
    }

    public boolean empty() {
        return size == 0;
    }

    public int getSize() {
        return size;
    }

    public static void main(String[] args) {
        Queue queue = new Queue();
        // Add numbers from 1 to 20 into the queue
        for (int i = 1; i <= 20; i++) {
            queue.enqueue(i);
        }

        // Remove and display the numbers
        while (!queue.empty()) {
            System.out.print(queue.dequeue() + " ");
        }
    }
}
