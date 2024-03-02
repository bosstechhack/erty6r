public class MyString1 {
    private char[] chars;

    public MyString1(char[] chars) {
        this.chars = new char[chars.length];
        for (int i = 0; i < chars.length; i++) {
            this.chars[i] = chars[i];
        }
    }

    public char charAt(int index) {
        if (index < 0 || index >= chars.length) {
            return 'f';
        }
        return chars[index];
    }

    public int length() {
        int length = 0;
        for (char ignored : chars) {
            length++;
        }
        return length;
    }

    public MyString1 substring(int begin, int end) {
        if (begin < 0 || end > chars.length || begin >= end) {
            return null;
        }
        char[] subChars = new char[end - begin];
        for (int i = begin, j = 0; i < end; i++, j++) {
            subChars[j] = chars[i];
        }
        return new MyString1(subChars);
    }

    public MyString1 toLowerCase() {
        char[] lowerChars = new char[chars.length];
        for (int i = 0; i < chars.length; i++) {
            lowerChars[i] = toLowerCaseChar(chars[i]);
        }
        return new MyString1(lowerChars);
    }

    private char toLowerCaseChar(char c) {
        if (c >= 'A' && c <= 'Z') {
            return (char) (c + 32);
        }
        return c;
    }

   
    public boolean equals(MyString1 s) {
        if (s == null || s.length() != this.length()) {
            return false;
        }
        for (int i = 0; i < this.length(); i++) {
            if (this.charAt(i) != s.charAt(i)) {
                return false;
            }
        }
        return true;
    }


    public static MyString1 valueOf(int i) {
      
        int num = i;
        int digitCount = 0;
        while (num != 0) {
            num /= 10;
            digitCount++;
        }

        char[] chars = new char[digitCount];
        num = i;
        for (int j = digitCount - 1; j >= 0; j--) {
            chars[j] = (char) ((num % 10) + '0');
            num /= 10;
        }

        return new MyString1(chars);
    }
    public static void main(String[] args) {
        
    }
}