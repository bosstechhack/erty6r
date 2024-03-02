import java.util.Date;

class Time {
     int hour;
     int minute;
     int second;

  
    public Time() {
        setTime(System.currentTimeMillis());
    }

  
    public Time(long elapsedTime) {
        setTime(elapsedTime);
    }

 
    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }


    public int getHour() {
        return hour;
    }

    public int getMinute() {
        return minute;
    }

    public int getSecond() {
        return second;
    }


    public void setTime(long elapsedTime) {
     
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
