import java.text.ParsePosition;
import java.text.NumberFormat;
import java.util.Scanner;

public class Main {
	
	static char m = 'm';
	static char s = 's';
	
	public static void main(String[] args) {
		int num = getNum(), i = 1, w = 1, k = 0, l = 0;
		System.out.println();
		String option = getChar();
		System.out.println();
		
		if (option.charAt(0) == m) {
			while (i < num) {
				System.out.print(i + " x ");
				w *= i; 
				i++;
			}
			System.out.println(i + " = " + w * i);
		}
		else if (option.charAt(0) == s) {
			while (k < num) {
				System.out.print(k + " + ");
				l += k;
				k++;
			}
			System.out.println(k + " = " + (l + k));
		}
	}
	
	public static boolean numCheck(String str) {
		ParsePosition pos = new ParsePosition(0);
		NumberFormat.getInstance().parse(str, pos);
		return str.length() == pos.getIndex();
	}
	
	public static int getNum() {
		double num = 0;
		boolean flag = false;
		Scanner scanf = new Scanner(System.in);
		String number;
		
		do {
			System.out.print("Enter a number (not 0): ");
			number = scanf.nextLine();
			number = number.trim();
			
			if (!numCheck(number)) flag = true;
			else { flag = false; num = Double.parseDouble(number); }
			if (num == 0.0) flag = true;
			
		} while (flag == true);
		
		//scanf.close();
		return (int)num;
	}
	
	public static String getChar() {
		String option;
		boolean flag = true;
		Scanner cin = new Scanner(System.in);
		
		do {
			System.out.print("Enter 'm' for multiplication OR 's' for sum: ");
			option = cin.nextLine();
			option = option.trim().toLowerCase();
			
			if (option.charAt(0) == m || option.charAt(0) == s) flag = false;
			else { flag = true; }
		} while (flag == true);
		
		cin.close();
		return option;
	}
}
