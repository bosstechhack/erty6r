
abstract class Employee {
   
    private String firstName;
    private String lastName;
   

    public Employee(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
      
    }

    public abstract double earnings();

  
    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

  
}


class SalariedEmployee extends Employee {
    private double weeklySalary;

    public SalariedEmployee(String firstName, String lastName, double weeklySalary) {
        super(firstName, lastName);
        this.weeklySalary = weeklySalary;
    }


    public double earnings() {
        return weeklySalary;
    }
}

class CommissionEmployee extends Employee {
    private double grossSales;
    private double commissionRate;


    public CommissionEmployee(String firstName, String lastName, double grossSales, double commissionRate) {
        super(firstName, lastName);
        this.grossSales = grossSales;
        this.commissionRate = commissionRate;
    }

    public double earnings() {
        return grossSales * commissionRate;
    }
}

class HourlyEmployee extends Employee {
    private double hourlyWage;
    private double hoursWorked;


    public HourlyEmployee(String firstName, String lastName, double hourlyWage, double hoursWorked) {
        super(firstName, lastName);
        this.hourlyWage = hourlyWage;
        this.hoursWorked = hoursWorked;
    }


    public double earnings() {
        if (hoursWorked <= 40) {
            return hourlyWage * hoursWorked;
        } else {
            return (hourlyWage * 40) + (hourlyWage * 1.5 * (hoursWorked - 40));
        }
    }
}


class BasePlusCommissionEmployee extends CommissionEmployee {
    private double baseSalary;

    public BasePlusCommissionEmployee(String firstName, String lastName, double grossSales, double commissionRate, double baseSalary) {
        super(firstName, lastName, grossSales, commissionRate);
        this.baseSalary = baseSalary;
    }


    public double earnings() {
        return super.earnings() + baseSalary;
    }
}


public class main1 {
    public static void main(String[] args) {
      
        SalariedEmployee se = new SalariedEmployee("John", "Doe", 1000.0);
        CommissionEmployee ce = new CommissionEmployee("Jane", "Smith", 5000.0, 0.1);
        HourlyEmployee he = new HourlyEmployee("Mike", "Johnson", 15.0, 45.0);
        BasePlusCommissionEmployee bpe = new BasePlusCommissionEmployee("Alice", "Brown", 8000.0, 0.12, 1500.0);

        displayEarnings(se);
        displayEarnings(ce);
        displayEarnings(he);
        displayEarnings(bpe);
    }

  
    public static void displayEarnings(Employee employee) {
        System.out.println(employee.getFirstName() + " " + employee.getLastName() + "'s earnings: $" + employee.earnings());
    }
}
