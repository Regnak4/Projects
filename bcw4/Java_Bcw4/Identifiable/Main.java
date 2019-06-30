public class Main {

    public static void main(String[] args) {
        Identifiable identifiable = new Identifiable("Dibs");
        Identifiable identifiable2 = new Identifiable("Chips");

        System.out.println(identifiable);
        System.out.println(identifiable2);
        System.out.println("total: " + Identifiable.getTotal());
        System.out.println("globalSerial: " + Identifiable.getGlobalSerial());
    }
}
