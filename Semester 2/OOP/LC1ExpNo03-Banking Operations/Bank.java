class Bank {
    String accountHolderName;
    float accountBalance;

    Bank(String accountHolderName, float initialBalance) {
        this.accountHolderName = accountHolderName;
        this.accountBalance = initialBalance;
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
        System.out.println("Account Balance: " + accountBalance);
    }

    public static void main(String arg[]) {
        Bank bankAccount = new Bank("Tony Stark", 500.0f);

    
        bankAccount.deposit(1000);
        bankAccount.withdraw(500);

    
        System.out.println("\nFinal Account Details:");
        bankAccount.displayAccountDetails();
    }
}
