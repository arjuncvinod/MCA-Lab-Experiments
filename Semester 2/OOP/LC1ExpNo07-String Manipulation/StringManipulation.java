import java.util.Scanner;

public class StringManipulation{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        System.out.println("First letter capital: " + capitalizeFirstLetter(inputString));

        System.out.println("Is palindrome: " + isPalindrome(inputString));

        int[] counts = countCharacters(inputString);
        System.out.println("Vowels: " + counts[0]);
        System.out.println("Consonants: " + counts[1]);
        System.out.println("Digits: " + counts[2]);
        System.out.println("Special characters: " + counts[3]);

        System.out.println("String with consonants deleted: " + deleteConsonants(inputString));

        
        System.out.print("Enter a character to check if present: ");
        char ch = scanner.next().charAt(0);
        System.out.println("Character " + ch + " present: " + isCharacterPresent(inputString, ch));

        System.out.print("Enter another string for comparison: ");
        String anotherString = scanner.next();
        System.out.println("Strings are equal (ignore case): " + compareIgnoreCase(inputString, anotherString));

        System.out.print("Enter a suffix to check if string ends with it: ");
        String suffix = scanner.next();
        System.out.println("String ends with suffix: " + endsWith(inputString, suffix));
scanner.close();
    }

    public static String capitalizeFirstLetter(String str) {
        if (str == null || str.isEmpty()) {
            return str;
        }
        return Character.toUpperCase(str.charAt(0)) + str.substring(1);
    }

    public static boolean isPalindrome(String str) {
        if (str == null || str.isEmpty()) {
            return false;
        }
        str = str.toLowerCase();
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public static int[] countCharacters(String str) {
        int vowels = 0, consonants = 0, digits = 0, specials = 0;
        str = str.toLowerCase();
        for (char ch : str.toCharArray()) {
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
vowels++;
                } else {
                    consonants++;
                }
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else {
                specials++;
            }
        }
        return new int[] { vowels, consonants, digits, specials };
    }

    public static String deleteConsonants(String str) {
        return str.replaceAll("[^aeiouAEIOU]", "");
    }

    public static boolean isCharacterPresent(String str, char ch) {
        return str.indexOf(ch) != -1;
    }

    public static boolean compareIgnoreCase(String str1, String str2) {
        return str1.equalsIgnoreCase(str2);
    }

    public static boolean endsWith(String str, String suffix) {
        return str.endsWith(suffix);
    }
}
