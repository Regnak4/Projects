public class Main {

    public static void main(String[] args) throws Throwable {
        Mohican a = new Mohican("John");
        Mohican b = new Mohican("Jack");
        Mohican c = new Mohican("Nick");
        Mohican d = new Mohican("Michal");
        
        System.out.println("ID = " + Mohican.getId());
        System.out.println("lastMohican = " + Mohican.getLast());
        System.out.println(c);
        
        a.finalize();
        b.finalize();
        c.finalize();
        d.finalize();
    }
}
