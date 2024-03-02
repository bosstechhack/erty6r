import java.util.Calendar;
import java.util.GregorianCalendar;

public class calender {
    public static void main(String[] args) {
        int month;
        int year;

        
        if (args.length == 0) {
            Calendar current = Calendar.getInstance();
            month = current.get(Calendar.MONTH) + 1;
            year = current.get(Calendar.YEAR);
        } else if (args.length == 1) {
           
            month = Integer.parseInt(args[0]);
            Calendar current = Calendar.getInstance();
            year = current.get(Calendar.YEAR);
        } else {
         
            month = Integer.parseInt(args[0]);
            year = Integer.parseInt(args[1]);
        }

        printCalendar(month, year);
    }

    public static void printCalendar(int month, int year) {
        Calendar calendar = new GregorianCalendar(year, month - 1, 1);

     

        
        int startDay = calendar.get(Calendar.DAY_OF_WEEK);
        int maxDay = calendar.getActualMaximum(Calendar.DAY_OF_MONTH);
        int currentDay = 1;

        // Fill in the preceding spaces before the first day of the month
        for (int i = 1; i < startDay; i++) {
            System.out.print("     ");
        }

        // Print the days of the month
        while (currentDay <= maxDay) {
            // Print the current day
            System.out.printf("%5d", currentDay);

            // Move to the next day
            currentDay++;
            startDay++;

            // Start a new line if it's Saturday
            if (startDay > Calendar.SATURDAY) {
                System.out.println();
                startDay = Calendar.SUNDAY;
            }
        }
    }
}
