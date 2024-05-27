class Complex {
    float real;
    float imaginary;

    Complex(float real, float imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    Complex add(Complex other) {
        float sumReal = this.real + other.real;
        float sumImaginary = this.imaginary + other.imaginary;
        return new Complex(sumReal, sumImaginary);
    }

    Complex subtract(Complex other) {
        float diffReal = this.real - other.real;
        float diffImaginary = this.imaginary - other.imaginary;
        return new Complex(diffReal, diffImaginary);
    }

    Complex multiply(Complex other) {
        float productReal = (this.real * other.real) - (this.imaginary * other.imaginary);
        float productImaginary = (this.real * other.imaginary) + (this.imaginary * other.real);
        return new Complex(productReal, productImaginary);
    }

    void display() {
        System.out.println(real + " + " + imaginary + "i");
    }

    public static void main(String arg[]) {
        Complex complex1 = new Complex(2.0f, 3.0f);
        Complex complex2 = new Complex(1.0f, 2.0f);

        System.out.println("Complex Number 1:");
        complex1.display();

        System.out.println("Complex Number 2:");
        complex2.display();

        Complex sumResult = complex1.add(complex2);
        System.out.println("\nSum of Complex Numbers:");
        sumResult.display();

        Complex diffResult = complex1.subtract(complex2);
        System.out.println("\nDifference of Complex Numbers:");
        diffResult.display();

        Complex productResult = complex1.multiply(complex2);
        System.out.println("\nProduct of Complex Numbers:");
        productResult.display();
    }
}
