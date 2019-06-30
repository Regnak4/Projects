public class UnitMain {
	public static void main(String[] args) throws UnitIsDeadException {
		Unit spearman = new Unit("Spearman Johnny", 17, 1);
		Unit swordsman = new Unit("Swordsman Mike", 18, 7);

		System.out.println(spearman.toString());
		System.out.println(swordsman.toString());

		try {
	        spearman.attack(swordsman);
	    } catch (UnitIsDeadException e) {
	        System.out.println("\n" + swordsman.getName() + " is dead!\n");
	    }

		System.out.println(spearman.toString());
		System.out.println(swordsman.toString());

		try {
	        swordsman.addHitPoints(10);
	    } catch (UnitIsDeadException e) {
	        System.out.println("\n" + swordsman.getName() + " is dead!\n");
	    }

	    spearman.addHitPoints(10);

		System.out.println(spearman.toString());
		System.out.println(swordsman.toString());
	}
}