public class Identifiable {

    private final String title;
    private int serial;
    private static int total;
    private static int globalSerial = 7;

    public Identifiable(String title) {
        this.title = title;
        Identifiable.total += 1;
        Identifiable.globalSerial += 1;
        this.serial = Identifiable.globalSerial;
    }

    public String getTitle() {
        return title;
    }

    public int getSerial() {
        return serial;
    }

    public static int getTotal() {
        return total;
    }

    public static int getGlobalSerial() {
        return globalSerial;
    }

    @Override
    public String toString() {
        return "Identifiable" + "(" + title + ", " + serial + ")";
    }

}
