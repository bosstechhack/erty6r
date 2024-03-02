import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class gotit {
    public static void main(String[] args) {
        String s = "ab#12#453";
        String regex = "#";
        String[] result = split(s, regex);
        for (String str : result) {
            System.out.println(str);
        }
    }

    public static String[] split(String s, String regex) {
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(s);
        List<String> tokens = new ArrayList<>();
        int lastIndex = 0;
        while (matcher.find()) {
            tokens.add(s.substring(lastIndex, matcher.start()));
            tokens.add(matcher.group());
            lastIndex = matcher.end();
        }
        if (lastIndex < s.length()) {
            tokens.add(s.substring(lastIndex));
        }
        return tokens.toArray(new String[0]);
    }
}

