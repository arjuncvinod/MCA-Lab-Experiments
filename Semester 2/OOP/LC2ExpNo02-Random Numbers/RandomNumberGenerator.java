import java.util.Random;

public class RandomNumberGenerator {
    public static void main(String[] args) {
        Random random = new Random();
        System.out.println("Five random numbers between 1 and 100:");
        for (int i = 0; i < 5; i++) {
            int randomNumber = random.nextInt(100) + 1;
            System.out.println(randomNumber);
        }
    }
}
