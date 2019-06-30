public class Vector {
    private double x;
    private double y;

    public Vector() {
        this.x = 0;
        this.y = 0;
    }

    public Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(double value) {
        x = value;
    }

    public void setY(double value) {
        y = value;
    }

    public double len() {
        return Math.hypot(x, y);
    }

    public boolean equals(Vector other) {
        return x == other.x && y == other.y;
    }

    public boolean notEquals(Vector other) {
        return !equals(other);
    }

    public void addTo(Vector other){
        x += other.x;
        y += other.y;
    } 

    public void subtractFrom(Vector other) {
        x -= other.x;
        y -= other.y;
    }

    public Vector sum(Vector other) {
        Vector temp = new Vector();

        temp.x = x + other.x;
        temp.y = y + other.y;
        return temp;
    } 

    public Vector sub(Vector other) {
        Vector temp = new Vector();

        temp.x = x - other.x;
        temp.y = y - other.y;
        return temp;
    }

    public String toString() {
        return "(" + x + ", " + y + ")";
    }

    public void print() {
        System.out.format("(%.2f, %.2f)%n", x, y);
    }
}