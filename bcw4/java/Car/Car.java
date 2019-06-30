public class Car {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;

    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.location = location;
        this.model = model;
    }

    public Car() {
        this.fuelCapacity = 60;
        this.fuelConsumption = 0.6;
        this.location = new Point(0, 0);
        this.model = "Mercedes";
    }    

    public double getFuelAmount() {
        return fuelAmount;
    }

    public double getFuelCapacity() {
        return fuelCapacity;
    }
    
    public double getFuelConsumption() {
        return fuelConsumption;
    }
    
    public Point getLocation() {
        return location;
    }
    public String getModel() {
        return model;
    }

    public void drive(Point destination) throws OutOfFuelException {
            double fuelNeed = location.distance(destination) * fuelConsumption;
            double newFuelAmount = fuelAmount - fuelNeed;

            if ( newFuelAmount < 0 ) {
                throw new OutOfFuelException();
            }
            fuelAmount = newFuelAmount;
            location = destination;
    }

    public void drive(double x, double y) throws OutOfFuelException {
        drive(new Point(x, y));
    } 

    void refill(double fuel) throws ToMuchFuelException {
        double newFuelAmount = fuelAmount + fuel;
        fuelAmount = newFuelAmount;

        if ( newFuelAmount > fuelCapacity ) {
            throw new ToMuchFuelException();
        }
    }

    public String toString() {
        return "=================================\nModel: " + model + "\nFuel Amount: " + fuelAmount + "/" + fuelCapacity + "\nCar Location:" + location + "\nFuel Consumption: " + fuelConsumption + " p/m \n=================================";
    }
}