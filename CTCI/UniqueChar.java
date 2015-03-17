/*Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?*/

import java.util.ArrayList;
import java.lang.String;

public class UniqueChar {

	public static void main(String[] args) {
		String s = args[0];
		boolean contains[] = new boolean[256];
		for (int i = 0; i < s.length(); i++) {
			if (contains[s.charAt(i)]) {
				System.out.println("Not unique");
				return;
			}
			contains[s.charAt(i)] = true;
		}
		System.out.println("Unique.");
		return;
	}
}
	