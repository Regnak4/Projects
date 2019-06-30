public class VectorMain {
	public static void main(String[] args) {
		Vector first = new Vector(6.7, -1);
		Vector second = new Vector(-3, -8.9);

		String a = second.toString();
		first.print();
		System.out.println(a);
	}
}