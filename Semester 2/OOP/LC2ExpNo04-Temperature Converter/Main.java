import java.util.Scanner;

class TemperatureConverter {
    public static double celsiusToFahrenheit(double celsius) {
        if (celsius < -273.15) {
            throw new IllegalArgumentException("Temperature below absolute zero (-273.15°C)");
        }
        return (celsius * 9 / 5) + 32;
    }

    public static double fahrenheitToCelsius(double fahrenheit) {
        if (fahrenheit < -459.67) {
            throw new IllegalArgumentException("Temperature below absolute zero (-459.67°F)");
        }
        return (fahrenheit - 32) * 5 / 9;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter temperature value: ");
        double temperature = scanner.nextDouble();
        System.out.print("Enter scale (C for Celsius, F for Fahrenheit): ");
        char scale = scanner.next().charAt(0);

        try {
            if (scale == 'C' || scale == 'c') {
                double convertedTemp = TemperatureConverter.celsiusToFahrenheit(temperature);
                System.out.println("Equivalent temperature in Fahrenheit: " + convertedTemp);
            } else if (scale == 'F' || scale == 'f') {
                double convertedTemp = TemperatureConverter.fahrenheitToCelsius(temperature);
                System.out.println("Equivalent temperature in Celsius: " + convertedTemp);
            } else {
                System.out.println("Invalid scale entered. Please enter 'C' for Celsius or 'F' for Fahrenheit.");
            }
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}