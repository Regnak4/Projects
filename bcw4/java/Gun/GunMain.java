public class GunMain {
	public static void main(String[] args) throws OutOfRoundsException, NotReadyException {
		Gun rifle = new Gun("Karabin przeciwpancerny wz.35", 12);
		Gun pistol = new Gun();

		String a = rifle.toString();
		String b = pistol.toString();

		System.out.println(a);
		System.out.println(b);

		try {
	        rifle.shoot();
	    } catch(NotReadyException e) {
	        System.out.println("Distort your gun shutter!\n");
	    }

		rifle.prepare();
	    pistol.prepare();
	    
	    for ( int i = 0; i < 12; i++ ) {
	        rifle.shoot();
	    }

	    try {
	    	rifle.shoot();
	    } catch(NotReadyException e) {
        	System.out.println("Distort your gun shutter!\n");
	    } catch(OutOfRoundsException e) {
	        System.out.println("\nReload your gun!\n");
	    }

	    String c = rifle.toString();
		String d = pistol.toString();

	    System.out.println(c);
		System.out.println(d);
	}
}