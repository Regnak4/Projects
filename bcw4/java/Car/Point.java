public class Point {
    private double x;
    private double y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public Point() {
        this.x = 0;
        this.y = 0;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
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
        System.out.format("(%.2f, %.2f)", x, y);
    }
}