import java.util.GregorianCalendar;

public class calender {
    public static void main(String[] args) {
        java.util.GregorianCalendar g1=new java.util.GregorianCalendar();
        System.out.println("Current Year : " +g1.get(GregorianCalendar.YEAR));
        System.out.println("Current Month : " +g1.get(GregorianCalendar.MONTH));
        System.out.println("Current Day : " +g1.get(GregorianCalendar.DAY_OF_MONTH));
        g1.setTimeInMillis(1234567898765L);
        System.out.println(" Year since 1234567898765L : " +g1.get(GregorianCalendar.YEAR));
        System.out.println(" Month since 1234567898765L : " +g1.get(GregorianCalendar.MONTH));
        System.out.println(" Day since 1234567898765L  : " +g1.get(GregorianCalendar.DAY_OF_MONTH));
        
        
    
    }
    
}
