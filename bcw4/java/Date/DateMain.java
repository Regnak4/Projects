public class DateMain {
	public static void main(String[] args) throws InvalidDateException  {
		Date date1 = new Date();
		Date date2 = new Date(5, 7, 1947);

		//Date date3 = new Date(12, 13, 1234);

		date1.print();
		System.out.println(date2.toString());
	}
}