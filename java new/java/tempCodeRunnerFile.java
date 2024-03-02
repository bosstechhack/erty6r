import java.util.Date;

class Time {
     int hour;
    int minute;
     int second;

     Time() {
        setTime(System.currentTimeMillis());
    }

   
     Time(long elapsedTime) {
        setTime(elapsedTime);
    }

     Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }


     int getHour() {
        return hour;
    }

     int getMinute() {
        return minute;
    }

     int getSecond() {
        return second;
    }

   
     void setTime(long elapsedTime) {
        
        long totalSeconds = elapsedTime / 1000;
        second = (int) (totalSeconds % 60);
        long totalMinutes = totalSeconds / 60;
        minute = (int) (totalMinutes % 60);
        long totalHours = totalMinutes / 60;
        
       
        hour = (int) (totalHours % 24);
    }
}

public class time {
    public static void main(String[] args) {
        
        Time currentTime = new Time();
        Time elapsedTime = new Time(555550000);

        
        System.out.println("Current time:");
        displayTime(currentTime);

       
        System.out.println("\nTime with elapsed time:");
        displayTime(elapsedTime);
    }

   
    public static void displayTime(Time time) {
        System.out.printf("%02d:%02d:%02d%n", time.getHour(), time.getMinute(), time.getSecond());
    }
}
