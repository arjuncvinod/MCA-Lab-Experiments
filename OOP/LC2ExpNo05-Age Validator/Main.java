import java.util.*;
class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }}
class Main {
    public static void checkEligibility(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("You are not eligible to vote");
        } else {
            System.out.println("You are eligible to vote");
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        try {
          System.out.print("Enter the Age: ");
        int  age=s.nextInt();
            checkEligibility(age);
        } catch (InvalidAgeException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}