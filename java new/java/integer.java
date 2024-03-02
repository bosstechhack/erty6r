class MyInteger {
    int value;


   MyInteger(int value) {
       this.value = value;
   }

    int getValue() {
       return value;
   }

    boolean isEven() {
       return value % 2 == 0;
   }

    boolean isOdd() {
       return value % 2 != 0;
   }

    boolean isPrime() {
       if (value <= 1) {
           return false;
       }
       for (int i = 2; i <= Math.sqrt(value); i++) {
           if (value % i == 0) {
               return false;
           }
       }
       return true;
   }

    static boolean isEven(int value) {
       return value % 2 == 0;
   }

   public static boolean isOdd(int value) {
       return value % 2 != 0;
   }


   public static boolean isPrime(int value) {
       if (value <= 1) {
           return false;
       }
       for (int i = 2; i <= Math.sqrt(value); i++) {
           if (value % i == 0) {
               return false;
           }
       }
       return true;
   }

   public static boolean isEven(MyInteger myInt) {
       return myInt.isEven();
   }

   public static boolean isOdd(MyInteger myInt) {
       return myInt.isOdd();
   }

   public static boolean isPrime(MyInteger myInt) {
       return myInt.isPrime();
   }

   public boolean equals(int value) {
       return this.value == value;
   }

  
   public boolean equals(MyInteger myInt) {
       return this.value == myInt.getValue();
   }

   public static int parseInt(char[] chars) {
       return Integer.parseInt(new String(chars));
   }

   public static int parseInt(String s) {
       return Integer.parseInt(s);
   }
}

public class integer {
   public static void main(String[] args) {
     
       MyInteger myInt = new MyInteger(17);


       System.out.println("Value: " + myInt.getValue());
       System.out.println("Is even? " + myInt.isEven());
       System.out.println("Is odd? " + myInt.isOdd());
       System.out.println("Is prime? " + myInt.isPrime());
       System.out.println("Is even (static)? " + MyInteger.isEven(17));
       System.out.println("Is odd (static)? " + MyInteger.isOdd(17));
       System.out.println("Is prime (static)? " + MyInteger.isPrime(17));
       System.out.println("Is even (MyInteger)? " + MyInteger.isEven(myInt));
       System.out.println("Is odd (MyInteger)? " + MyInteger.isOdd(myInt));
       System.out.println("Is prime (MyInteger)? " + MyInteger.isPrime(myInt));
       System.out.println("Equals 17? " + myInt.equals(17));
       System.out.println("Equals MyInteger(17)? " + myInt.equals(new MyInteger(17)));

       char[] chars = {'1', '2', '3'};
       String s = "456";
       System.out.println("parseInt(char[]): " + MyInteger.parseInt(chars));
       System.out.println("parseInt(String): " + MyInteger.parseInt(s));
   }
}
