import java.util.ArrayList;
import java.util.Scanner;

class BankAccount {
    private int accountNumber;
    private double balance;

    public BankAccount(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public int getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }
}

public class Bank {
    private String bankName;
    private ArrayList<BankAccount> accounts;

    public Bank(String bankName) {
        this.bankName = bankName;
        this.accounts = new ArrayList<>();
    }

    public void addAccount(BankAccount account) {
        accounts.add(account);
    }

    public void removeAccount(int accountNumber) {
        for (BankAccount account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                accounts.remove(account);
                System.out.println("Account removed successfully.");
                return;
            }
        }
        System.out.println("Account not found.");
    }

    public void displayAccounts() {
        if (accounts.isEmpty()) {
            System.out.println("No accounts in the bank.");
        } else {
            System.out.println("Bank Accounts:");
            for (BankAccount account : accounts) {
                System.out.println("Account Number: " + account.getAccountNumber() + ", Balance: " + account.getBalance());
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Bank bank = new Bank("My Bank");

        while (true) {
            System.out.println("\nMenu:");
            System.out.println("1. Add Account");
            System.out.println("2. Remove Account");
            System.out.println("3. Display Accounts");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter account number: ");
                    int accNumber = scanner.nextInt();
                    System.out.print("Enter balance: ");
                    double balance = scanner.nextDouble();
                    bank.addAccount(new BankAccount(accNumber, balance));
                    break;
                case 2:
                    System.out.print("Enter account number to remove: ");
                    int accToRemove = scanner.nextInt();
                    bank.removeAccount(accToRemove);
                    break;
                case 3:
                    bank.displayAccounts();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }
}
