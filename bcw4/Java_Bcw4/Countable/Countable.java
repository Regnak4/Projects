public class Countable {

    private final String title;
    private static int total;

    public Countable(String title) {
        this.title = title;
        Countable.total += 1;
    }

    public String getTitle() {
        return title;
    }

    public static int getTotal() {
        return total;
    }

    @Override
    public String toString(){
        return "Countable = " + title;
    }
}
