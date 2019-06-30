public class PointMain {
	public static void main(String[] args) {
		Point one = new Point(3.5, -8.2);
		Point another = new Point();

		String a = another.toString();

		one.print();
		System.out.println(another);

		System.out.println(one.distance(another));

		System.out.println(one.notEquals(another));
	}
}
