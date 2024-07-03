import java.util.Scanner;

public class TallyMarks {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        System.out.println("Tally marks: " + generateTallyMarks(number));
    }

    public static String generateTallyMarks(int number) {
        StringBuilder tally = new StringBuilder();
        int groupsOfFive = number / 5;
        int remainder = number % 5;

        for (int i = 0; i < groupsOfFive; i++) {
            tally.append("||||| ");
        }
        for (int i = 0; i < remainder; i++) {
            tally.append("|");
        }

        return tally.toString().trim();
    }
}
