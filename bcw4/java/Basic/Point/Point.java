public class Point {
    private double x;
    private double y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(double x, double y) {
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

    public double distance(Point other) {
        return Math.hypot(x-other.x, y-other.y);
    }

    public boolean equals(Point other) {
        return x == other.x && y == other.y;
    } 

    public boolean notEquals(Point other) {
        return !equals(other);
    } 

    public String toString() {
        return "(" + x + ", " + y + ")";
    }

    public void print() {
        System.out.format("(%.2f, %.2f)%n", x, y);
    }
}