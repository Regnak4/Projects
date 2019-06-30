import java.time.format.DateTimeFormatter;

public class Date {
    private int day;
    private int month;
    private int year;

    public void validate(int day, int month, int year) throws InvalidDateException {
        if ( day < 1 || day > 31 ) {
            throw new InvalidDateException();
            //"Invalid date!"
        }
        if ( month < 1 || month > 12 ) {
            throw new InvalidDateException();
            //"Invalid month!"
        }
        if ( year < 0 ) {
            throw new InvalidDateException();
            //"Invalid year!"
        }
        if ( month == 2 || month == 4 || month == 6 || month == 9 || month == 11 ) {
            if ( day == 31 ) {
                throw new InvalidDateException();
                //"This month doesn`t contain so many days!"
            }
        }
        if ( day == 30 && month == 2 ) {
            throw new InvalidDateException();
            //"February doesn`t have so days!"
        }
        if ( year % 4 != 0 ) {
            if ( day == 29 && month == 2 ) {
                throw new InvalidDateException();
                //"February doesn`t contain 29 days this year!"
            }
        }
    }

    public Date(int day, int month, int year) throws InvalidDateException {
        this.day = day;
        this.month = month;
        this.year = year;

        validate(day, month, year);
    }

    public Date() {
        this.day = 1;
        this.month = 1;
        this.year = 1970;
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

    public String toString() {
        return "(" + day + ":" + month + ":"+ year +")";
    }

    public void print() {
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd:MM:yyyy");
        System.out.format("(%d:%d:%d)\n", day, month, year);
    }
}