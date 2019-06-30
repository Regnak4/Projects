public class Mohican {

    private static Mohican lastMohican;
    private static int id;
    private int selfID;
    private String name;

    public Mohican(String name) {
        Mohican.id += 1;
        selfID = Mohican.id;
        this.name = name;
        Mohican.lastMohican = this;
    }

    public int getSelfID() {
        return selfID;
    }

    public String getName() {
        return name;
    }

    public static int getId() {
        return id;
    }

    public static Mohican getLast() {
        return lastMohican;
    }

    @Override
    public String toString() {
        return "Mohican" + "(" + name + ", " + selfID + ")";
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Passport " + name +" destroyed.");
    }
}
