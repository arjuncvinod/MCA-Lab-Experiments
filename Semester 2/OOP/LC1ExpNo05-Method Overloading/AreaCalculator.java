import java.util.Scanner;

class AreaCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Select a shape to calculate area:");
        System.out.println("1. Circle");
        System.out.println("2. Rectangle");
        System.out.println("3. Triangle");

        int choice = scanner.nextInt();

        switch (choice) {
            case 1:
                System.out.print("Enter the radius of the circle: ");
                float radiusCircle = scanner.nextFloat();
                System.out.println("Area of the circle: " + calculateAreaCircle(radiusCircle));
                break;

            case 2:
                System.out.print("Enter the length of the rectangle: ");
                float lengthRectangle = scanner.nextFloat();
                System.out.print("Enter the width of the rectangle: ");
                float widthRectangle = scanner.nextFloat();
                System.out.println("Area of the rectangle: " + calculateAreaRectangle(lengthRectangle, widthRectangle));
                break;

            case 3:
                System.out.print("Enter the base of the triangle: ");
                float baseTriangle = scanner.nextFloat();
                System.out.print("Enter the height of the triangle: ");
                float heightTriangle = scanner.nextFloat();
                System.out.println("Area of the triangle: " + calculateAreaTriangle(baseTriangle, heightTriangle));
                break;

            default:
                System.out.println("Invalid choice. Please select a valid shape.");
        }

        scanner.close();
    }

    static float calculateAreaCircle(float radius) {
        return (float) (Math.PI * radius * radius);
    }

    static float calculateAreaRectangle(float length, float width) {
        return length * width;
    }

    static float calculateAreaTriangle(float base, float height) {
        return 0.5f * base * height;
    }
}
