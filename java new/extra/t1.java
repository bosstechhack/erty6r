
 class Book {
    private String title;
    private String author;
    private String isbt;

    public Book(String title, String author, String isbt) {
        this.title = title;
        this.author = author;
        this.isbt = isbt;
    }

    public void displayDetails() {
        System.out.println(title);
        System.out.println(author);
        System.out.println(isbt);
    }
}


public class t1 {
    public static void main(String[] args) {
 
        Book book = new Book("Effective Java", "Joshua Bloch", "978-0134685991");
    
        book.displayDetails();
    }
}
