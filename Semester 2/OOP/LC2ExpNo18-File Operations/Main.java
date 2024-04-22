import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nMENU:");
            System.out.println("1. Create a file");
            System.out.println("2. Write to a file");
            System.out.println("3. Read from a file");
            System.out.println("4. Delete a file");
            System.out.println("5. Exit");
            System.out.print("Enter your choice (1-5): ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    createFile(scanner);
                    break;
                case 2:
                    writeToFile(scanner);
                    break;
                case 3:
                    readFromFile(scanner);
                    break;
                case 4:
                    deleteFile(scanner);
                    break;
                case 5:
                    System.out.println("Exiting...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 5.");
            }
        }
    }

    private static void createFile(Scanner scanner) {
        System.out.print("Enter the filename to create: ");
        String filename = scanner.nextLine();
        File file = new File(filename);
        try {
            if (file.createNewFile()) {
                System.out.println("File '" + filename + "' created successfully.");
            } else {
                System.out.println("File '" + filename + "' already exists.");
            }
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }

    private static void writeToFile(Scanner scanner) {
        System.out.print("Enter the filename to write to: ");
        String filename = scanner.nextLine();
        try (BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(filename), StandardCharsets.UTF_8))) {
            System.out.print("Enter the content to write to the file: ");
            String content = scanner.nextLine();
            writer.write(content);
            System.out.println("Content written to '" + filename + "' successfully.");
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }

    private static void readFromFile(Scanner scanner) {
        System.out.print("Enter the filename to read from: ");
        String filename = scanner.nextLine();
        try {
            String content = new String(java.nio.file.Files.readAllBytes(new File(filename).toPath()));
            System.out.println("Content of the file:");
            System.out.println(content);
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }

    private static void deleteFile(Scanner scanner) {
        System.out.print("Enter the filename to delete: ");
        String filename = scanner.nextLine();
        File file = new File(filename);
        if (file.delete()) {
            System.out.println("File '" + filename + "' deleted successfully.");
        } else {
            System.out.println("File '" + filename + "' not found.");
        }
    }
}
