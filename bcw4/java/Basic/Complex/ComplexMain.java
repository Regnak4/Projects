public class ComplexMain {
	public static void main(String[] args) {
		Complex first = new Complex(3.33, 5.55);
		Complex second = new Complex(1.2, -6.8);

		first.addTo(second);

		String x = second.toString();
		System.out.println(x);
		first.print();
	}
}