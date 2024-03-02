import java.text.SimpleDateFormat;
import java.util.Date;

public class practice {
    public static void main(String[] args) {
        Date today;
        SimpleDateFormat sdf;
        today =new Date();
        sdf= new SimpleDateFormat("MMMMM/dd/yyyy");
        // System.out.println(today.toString());
        System.out.println(sdf.format(today));
    }
}
