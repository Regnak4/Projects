public class CarMain {
	public static void main(String[] args) throws OutOfFuelException, ToMuchFuelException {
		Car car = new Car(80, 0.6, new Point(0, 0), "Zhigul");

		try {
			car.refill(80);
		} catch(ToMuchFuelException e) {
			System.out.println("Car tank overfilled!");
		}

		try {
			car.drive(100, 0);
		} catch (OutOfFuelException e) {
			System.out.println("Out of Fuel!");
		}

		String a = car.toString();

		System.out.println(a);		
	}
}