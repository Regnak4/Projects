public class Passport {

    private String series;
    private static char[] seriesLast = {'A', 'A'};
    private static int total;
    private static int globalSerial;
    private int serial;
    private String name;
    private String surname;
    private Date birthday;

    public Passport(String name, String surname, Date birthday) throws WrongDateException, SeriesEndedException {
        Date date = new Date();

        if (date.compare(birthday) == -1) {
            throw new WrongDateException();
        }
        this.name = name;
        this.surname = surname;
        this.birthday = birthday;
        total += 1;
        if (globalSerial == 999999) {
            globalSerial = 0;
            if (seriesLast[1] < 'Z') {
                seriesLast[1] += 1;
            } else {
                seriesLast[1] = 'A';
                if (seriesLast[0] < 'Z') {
                    seriesLast[0] += 1;
                } else {
                    throw new SeriesEndedException();
                }
            }
        }
        globalSerial += 1;
        serial = globalSerial;
        series = "" + seriesLast[0] + seriesLast[1];
    }

    public static String getSeriesLast() {
        return "" + seriesLast[0] + seriesLast[1];
    }

    public static int getTotal() {
        return total;
    }

    public static int getGlobalSerial() {
        return globalSerial;
    }

    public String getSeries() {
        return series;
    }

    public int getSerial() {
        return serial;
    }

    public String getName() {
        return name;
    }

    public String getSurname() {
        return surname;
    }

    public Date getBirthday() {
        return birthday;
    }

    public static void setSeriesLast(String content) throws WrongSeriesException {
        String line = content.toUpperCase();
        char character0 = line.charAt(0);
        char character1 = line.charAt(1);

        if (content.length() != 2) {
            throw new WrongSeriesException();
        }
        if (character0 < 'A' || character0 > 'Z') {
            throw new WrongSeriesException();
        }
        if (character1 < 'A' || character1 > 'Z') {
            throw new WrongSeriesException();
        }
        seriesLast[0] = character0;
        seriesLast[1] = character1;
        globalSerial = 0;
    }

    @Override
    public String toString() {
        Date date = getBirthday();
        int number = serial;
        int value = 0;
        String content;

        for (int i = 100000; i >= 10; i /= 10) {
            if (number < i) {
                value += 1;
            } else {
                break;
            }
        }
        content = "Passport: " + series + " ";
        for (int i = 0; i < value; i++) {
            content += "0";
        }
        content += (serial + "\n");
        content += ("Name: " + name + "\n");
        content += ("Surname: " + surname + "\n");
        content += ("Birthday: " + date.getDay() + "." + date.getMonth() + "." + date.getYear() + "\n");

        return content;
    }
}
