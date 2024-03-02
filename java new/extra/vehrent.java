abstract class Vehicle {
    protected String model;
    protected double rentalRate;

    public Vehicle(String model, double rentalRate) {
        this.model = model;
        this.rentalRate = rentalRate;
    }

    public abstract double calculateRentalCost(int rentalDurationHours);
}

class Car extends Vehicle {
    private int seatcap;

    public Car(String model, int seatcap, double rentalRate) {
        super(model, rentalRate);
        this.seatcap = seatcap;
    }


    public double calculateRentalCost(int rentDur) {
        return rentalRate * rentDur;
    }

    public void displayInfo() {
        System.out.println("Car:");
        System.out.println("Model: " + model);
        System.out.println("Seating Capacity: " + seatcap);
        System.out.println("Rental Rate: $" + rentalRate + "/hour");
    }
}

class Motorcycle extends Vehicle {
    private String engineDisplacement;

    public Motorcycle(String model, String engineDisplacement, double rentalRate) {
        super(model, rentalRate);
        this.engineDisplacement = engineDisplacement;
    }

    public double calculateRentalCost(int rentDur) {
        return rentalRate * rentDur;
    }

    public void displayInfo() {
        System.out.println("Motorcycle:");
        System.out.println("Model: " + model);
        System.out.println("Engine Displacement: " + engineDisplacement);
        System.out.println("Rental Rate: $" + rentalRate + "/hour");
    }
}

public class vehrent {
    public static void main(String[] args) {
        Car car = new Car("Honda Civic", 5, 50);
        Motorcycle motorcycle = new Motorcycle("Yamaha YZF-R6", "600cc", 30);

        car.displayInfo();
        System.out.println();

        motorcycle.displayInfo();
        System.out.println();

        int carRentalDurationHours = 3;
        double carRentalCost = car.calculateRentalCost(carRentalDurationHours);
        System.out.println("Car Rental Cost:");
        car.displayInfo();
        System.out.println("Rental Duration : " + carRentalDurationHours);
        System.out.println("Total Rental Cost: $" + carRentalCost);
        System.out.println();

        int motorcycleRentalDurationHours = 2;
        double motorcycleRentalCost = motorcycle.calculateRentalCost(motorcycleRentalDurationHours);
        System.out.println("Motorcycle Rental Cost:");
        motorcycle.displayInfo();
        System.out.println("Rental Duration : " + motorcycleRentalDurationHours);
        System.out.println("Total Rental Cost: "+ motorcycleRentalCost);
    }
}
