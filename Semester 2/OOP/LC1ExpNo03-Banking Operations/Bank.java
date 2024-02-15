class Bank {
    String accountHolderName;
    float accountBalance;
    String accountNumber;
    String accountType;

    Bank(String accountHolderName, float initialBalance, String accountNumber, String accountType) {
        this.accountHolderName = accountHolderName;
        this.accountBalance = initialBalance;
        this.accountNumber = accountNumber;
        this.accountType = accountType;
    }

    void deposit(float amount) {
        if (amount > 0) {
            accountBalance += amount;
            System.out.println("Deposit successful. New balance: " + accountBalance);
        } else {
            System.out.println("Invalid deposit amount. Please enter a positive value.");
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            System.out.println("Withdrawal successful. New balance: " + accountBalance);
        } else {
            System.out.println("Invalid withdrawal amount or insufficient funds.");
        }
    }

    float getAccountBalance() {
        return accountBalance;
    }

    void displayAccountDetails() {
        System.out.println("Account Holder: " + accountHolderName);
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Type: " + accountType);
        System.out.println("Account Balance: " + accountBalance);
    }

    public static void main(String args[]) {
        Bank bankAccount = new Bank("Tony Stark", 500.0f, "123456789", "SAVINGS");

        bankAccount.deposit(1000);
        bankAccount.withdraw(500);

        System.out.println("\nFinal Account Details:");
        bankAccount.displayAccountDetails();
    }
}
