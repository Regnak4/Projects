import java.util.GregorianCalendar;

public class Date {

    private int day;
    private int month;
    private int year;

    public Date(int day, int month, int year) throws WrongYearException, WrongMonthException, WrongDayException {
        validate(day, month, year);
    }

    public Date() {
        GregorianCalendar date = new GregorianCalendar();
        
        this.day = date.get(GregorianCalendar.DAY_OF_MONTH);
        this.month = date.get(GregorianCalendar.MONTH) + 1;
        this.year = date.get(GregorianCalendar.YEAR);
    }

    private void validate(int day, int month, int year) throws WrongYearException, WrongMonthException, WrongDayException {
        int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (year != 0) {
            this.year = year;
        } else {
            throw new WrongYearException();
        }
        if (month > 0 && month < 13) {
            this.month = month;
        } else {
            throw new WrongMonthException();
        }
        if (!(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) {
            days[2] = 28;
        }
        if (day >= 1 && day <= days[month - 1]) {
            this.day = day;
            if (year == 1582 && month == 10 && this.day > 4 && this.day < 15) {
                this.day = 15;
            }
        } else {
            throw new WrongDayException();
        }
    }

    public int getDay() {
        return day;
    }

    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }

    public int compare(Date other) {
        if (year == other.getYear() && month == other.getMonth() && day == other.getDay()) {
            return 0;
        }
        if (year < other.getYear()) {
            return -1;
        }
        if (year == other.getYear() && month < other.getMonth()) {
            return -1;
        }
        if (year == other.getYear() && month == other.getMonth() && day < other.getDay()) {
            return -1;
        }
        return 1;
    }

    @Override
    public String toString() {
        return "Date: " + day + "." + month + "." + year;
    }
}
