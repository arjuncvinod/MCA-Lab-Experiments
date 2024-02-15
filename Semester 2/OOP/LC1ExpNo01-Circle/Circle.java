public class Circle {
    float radius;

    Circle() {
        this.radius = 1;
    }

    Circle(float radius) {
        this.radius = radius;
    }

    float calculateCircumference() {
        return (float) (2 * Math.PI * radius);
    }

    float getRadius() {
        return radius;
    }

    void setRadius(float radius) {
        this.radius = radius;
    }

    public static void main(String arg[]) {
        Circle circleDefault = new Circle();
        System.out.println("Default Circle Radius: " + circleDefault.getRadius());

        Circle circleParameterized = new Circle(5);
        System.out.println("Parameterized Circle Radius: " + circleParameterized.getRadius());

        System.out.println("Circumference of Parameterized Circle: " + circleParameterized.calculateCircumference());
    }
}
