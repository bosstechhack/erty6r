
interface Vehicle {
    void drive();
}

interface Electric {
    void charge();
}

interface ElectricVehicle extends Vehicle, Electric {

}

class ElectricCar implements ElectricVehicle {
    public void drive() {
        System.out.println("Car is driving");
    }

    public void charge() {
        System.out.println("Car is charging");
    }
}

public class Main1 {
    public static void main(String[] args) {
        ElectricCar car = new ElectricCar();

        car.drive();
        car.charge();
    }
}
