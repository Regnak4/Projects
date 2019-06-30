public class Complex {
    private double real;
    private double imaginary;

    public Complex() {
        this.real = 0.0;
        this.imaginary = 0.0;
    }

    public Complex(double real, double imaginary) {
        this.real = real; 
        this.imaginary = imaginary;
    }

    public double getReal() {
        return real;
    }
    
    public double getImaginary() {
        return imaginary;
    }

    public boolean equals(Complex other) {
        return real == other.real && imaginary == other.imaginary;
    }

    public boolean notEquals(Complex other) {
        return !equals(other);
    }

    public void addTo(Complex other) {
        real += other.real;
        imaginary += other.imaginary;
    }

    public void subtractFrom(Complex other) {
        real -= other.real;
        imaginary -= other.imaginary;
    }

    public Complex sum(Complex other) {
        Complex temp = new Complex();

        temp.real = real + other.real;
        temp.imaginary = imaginary + other.imaginary;
        return temp;
    }

    public Complex subtraction(Complex other) {
        Complex temp = new Complex();

        temp.real = real - other.real;
        temp.imaginary = imaginary - other.imaginary;
        return temp;   
    }

    public Complex multiplication(Complex other) {
        Complex temp = new Complex();
    
        temp.real = real * other.real - imaginary * other.imaginary;
        temp.imaginary = imaginary * other.real + real * other.imaginary;
        return temp;
    }

    public String toString() {
        if ( imaginary >= 0 ) {
            return  real + "+" + imaginary + "i";
        }
        return  real + "" + imaginary + "i";
    }

    public void print() {
        if ( imaginary >= 0) {
            System.out.format("%.2f+%.2fi%n", real, imaginary);  
        } else {
            System.out.format("%.2f%.2fi%n", real, imaginary);
        }
    }
}