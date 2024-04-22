import java.util.Scanner;

abstract class Animal {
    abstract void makeSound();
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("Woof!");
    }
}

class Cat extends Animal {

    void makeSound() {
        System.out.println("Meow!");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter 'dog' or 'cat' to choose an animal: ");
        String animalChoice = scanner.nextLine();

        Animal animal;
        if (animalChoice.equalsIgnoreCase("dog")) {
            animal = new Dog();
        } else if (animalChoice.equalsIgnoreCase("cat")) {
            animal = new Cat();
        } else {
            System.out.println("Invalid choice!");
            return;
        }

        animal.makeSound();

        scanner.close();
    }
}
