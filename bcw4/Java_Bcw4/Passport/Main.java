public class Main {

    public static void main(String[] args) throws WrongYearException, WrongDateException, SeriesEndedException, WrongMonthException, WrongDayException, WrongSeriesException {
        Passport passport1 = new Passport("John", "Brown", new Date(22, 10, 2012));
        Passport passport2 = new Passport("Jack", "Black", new Date(12, 01, 2010));

        System.out.println(passport1);
        System.out.println(passport2);

        Passport.setSeriesLast("BB");
        System.out.println("Given a new series: " + Passport.getSeriesLast());
        Passport passport3 = new Passport("Bill", "White", new Date(3, 3, 2000));
        System.out.println(passport3);
    }

}
