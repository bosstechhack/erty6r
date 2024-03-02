class Account {
    private long accountNumber;
    private double balance;

    public Account(long accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public long getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    public void display() {
        System.out.println("Account Number: " + accountNumber);
        System.out.printf("Balance: $%.2f\n", balance);
    }
}

class SavingsAccount extends Account {
    private double interestRate;

    public SavingsAccount(long accountNumber, double balance, double interestRate) {
        super(accountNumber, balance);
        this.interestRate = interestRate;
    }

    public double getInterestRate() {
        return interestRate;
    }

    public void display() {
        super.display();
        System.out.println("Interest Rate: " + interestRate + "%");
    }
}

class CheckingAccount extends Account {
    private double transactionFee;

    public CheckingAccount(long accountNumber, double balance, double transactionFee) {
        super(accountNumber, balance);
        this.transactionFee = transactionFee;
    }

    public double getTransactionFee() {
        return transactionFee;
    }

  
    public void display() {
        super.display();
        System.out.println("Transaction Fee: $" + transactionFee);
    }
}

public class account{
    public static void main(String[] args) {
        SavingsAccount savingsAccount = new SavingsAccount(1234567890, 5000.00, 5.0);
        CheckingAccount checkingAccount = new CheckingAccount(987654321, 1000.00, 1.0);

        System.out.println("Savings Account:");
        savingsAccount.display();
        System.out.println("\nChecking Account:");
        checkingAccount.display();
    }
}
