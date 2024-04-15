package com.othercompany;

import com.mycompany.math.Calculator;

public class Main {
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        int resultAddition = calculator.add(10, 5);
        System.out.println("Addition result: " + resultAddition);

        int resultSubtraction = calculator.subtract(10, 5);
        System.out.println("Subtraction result: " + resultSubtraction);

        int resultMultiplication = calculator.multiply(10, 5);
        System.out.println("Multiplication result: " + resultMultiplication);

        double resultDivision = calculator.divide(10.0, 5.0);
        System.out.println("Division result: " + resultDivision);
    }
}