import java.util.Date;

class Account {
    private int accountNumber;
    private double balance;
    private double annualInterestRate;
    private Date dateCreated;

    public Account(int accountNumber, double balance, double annualInterestRate) {
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.annualInterestRate = annualInterestRate;
        this.dateCreated = new Date();
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) {
        balance -= amount;
    }

    public double getBalance() {
        return balance;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public Date getDateCreated() {
        return dateCreated;
    }

    @Override
    public String toString() {
        return "Account Number: " + accountNumber + "\nBalance: $" + balance + "\nAnnual Interest Rate: " + annualInterestRate + "%\nDate Created: " + dateCreated;
    }
}

class CheckingAccount extends Account {
    private double overdraftLimit;

    public CheckingAccount(int accountNumber, double balance, double annualInterestRate, double overdraftLimit) {
        super(accountNumber, balance, annualInterestRate);
        this.overdraftLimit = overdraftLimit;
    }

    public double getOverdraftLimit() {
        return overdraftLimit;
    }

    @Override
    public String toString() {
        return super.toString() + "\nOverdraft Limit: $" + overdraftLimit;
    }
}

class SavingsAccount extends Account {
    public SavingsAccount(int accountNumber, double balance, double annualInterestRate) {
        super(accountNumber, balance, annualInterestRate);
    }

    @Override
    public String toString() {
        return super.toString();
    }
}

public class banking {
    public static void main(String[] args) {
        // Create objects of Account, SavingsAccount, and CheckingAccount
        Account account = new Account(12345, 1000.0, 2.5);
        SavingsAccount savingsAccount = new SavingsAccount(54321, 500.0, 3.0);
        CheckingAccount checkingAccount = new CheckingAccount(98765, 2000.0, 2.0, 500.0);

        // Invoke toString() methods
        System.out.println("Account Details:\n" + account + "\n");
        System.out.println("Savings Account Details:\n" + savingsAccount + "\n");
        System.out.println("Checking Account Details:\n" + checkingAccount);
    }
}

