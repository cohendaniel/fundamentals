/*Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer. NOTE: One or two additional variables are fine. An extra copy of the array is not.*/

import java.util.ArrayList;
import java.lang.String;

public class DuplicateChars {

	public static void main(String[] args) {
		char[] s = args[0].toCharArray();
		int len = s.length;
		int tail = 1;
		for (int i = 1; i < len; i++) {
			int j;
			for (j = 0; j < tail; j++) {
				if (s[i] == s[j]) {
					break;
				}
			}
			if (j == tail) {
				s[tail] = s[i];
				tail++;
			}
		}
		for (int i = tail; i < len; i++) { 
			s[i] = 0;
		}
		System.out.println(s);
	}
}