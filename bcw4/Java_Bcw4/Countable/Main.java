public class Main {

    public static void main(String[] args) {
        Countable countable = new Countable("Dibs");
        Countable countable2 = new Countable("Chips");

        System.out.println(countable);
        System.out.println(countable2);
        System.out.println("Total: " + Countable.getTotal());
    }
}
