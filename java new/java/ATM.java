import java.util.Scanner;

class Account {
     int id;
     double balance;

    public Account(int id, double balance) {
        this.id = id;
        this.balance = balance;
    }

    public int getId() {
        return id;
    }

    public double getBalance() {
        return balance;
    }

    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn $" + amount + " from account " + id);
        } else {
            System.out.println("Invalid withdrawal amount or insufficient balance.");
        }
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited $" + amount + " to account " + id);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }
}

public class ATM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Account[] accounts = new Account[10];
        for (int i = 0; i < accounts.length; i++) {
            accounts[i] = new Account(i, 100.0);
        }

        while (true) {
            int id;
            do {
                System.out.print("Enter an id: ");
                id = sc.nextInt();
            } while (id < 0 || id >= accounts.length);

            System.out.println("\nMain menu");
            System.out.println("1: check balance");
            System.out.println("2: withdraw");
            System.out.println("3: deposit");
            System.out.println("4: exit");

            System.out.print("Enter a choice: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("The balance is " + accounts[id].getBalance());
                    break;
                case 2:
                    System.out.print("Enter an amount to withdraw: ");
                    double withdrawAmount = sc.nextDouble();
                    accounts[id].withdraw(withdrawAmount);
                    break;
                case 3:
                    System.out.print("Enter an amount to deposit: ");
                    double depositAmount = sc.nextDouble();
                    accounts[id].deposit(depositAmount);
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a number from 1 to 4.");
            }

            System.out.println();
        }
    }
}
