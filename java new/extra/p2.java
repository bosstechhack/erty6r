abstract class Employee {
    protected String name;
    protected double salary;

    public Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public abstract void displayDetails();
}

class Manager extends Employee {
    private String department;

    public Manager(String name, double salary, String department) {
        super(name, salary);
        this.department = department;
    }

    public void displayDetails() {
        System.out.println("Manager:");
        System.out.println("Name: " + name);
        System.out.println("Salary: $" + String.format("%.2f", salary));
        System.out.println("Department: " + department);
    }
}

class Developer extends Employee {
    private String project;

    public Developer(String name, double salary, String project) {
        super(name, salary);
        this.project = project;
    }

    public void displayDetails() {
        System.out.println("Developer:");
        System.out.println("Name: " + name);
        System.out.println("Salary: $" + String.format("%.2f", salary));
        System.out.println("Project: " + project);
    }
}

public class p2{
    public static void main(String[] args) {
        Manager manager = new Manager("John Smith", 5000.00, "Sales");
        Developer developer = new Developer("Jane Doe", 4000.00, "XYZ Project");

        manager.displayDetails();
        System.out.println();
        developer.displayDetails();
    }
}
