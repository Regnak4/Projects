public class Gun {
    private int amount;
    private int capacity;
    private boolean isReady;
    private String model;
    private int totalShots;

    public Gun(String model, int capacity) {
        this.capacity = capacity;
        this.amount = capacity;
        this.isReady = false;
        this.model = model;
        this.totalShots = 0;
    }
    
    public Gun() {
        this.capacity = 8;
        this.amount = 8;
        this.isReady = false;
        this.model = "Beretta";
        this.totalShots = 0;
    }

    public int getAmount() {
        return amount;
    }

    public int getCapacity() {
        return capacity;
    }

    public boolean ready() {
        return isReady;
    }

    public String getModel() {
        return model;
    }

    public int getTotalShots() {
        return totalShots;
    }

    public void prepare() {
        isReady = !isReady;
    }
    
    public void reload() {
        amount = capacity;
    } 

    public void shoot() throws OutOfRoundsException, NotReadyException {
        if ( amount == 0 ) {
            isReady = false;
            throw new OutOfRoundsException();
        }

        if ( !ready() ) {
            throw new NotReadyException();
        }

        amount -= 1;
        totalShots += 1;

        System.out.println("Bang!");
    }

    public String toString() {
        return "===================\nModel: " + getModel() + "\nRounds: " + getAmount() + "/" + getCapacity() + "\nReady: " + ready() + "\nTimes Shoots: " + getTotalShots() + "\n===================\n";
    }
}