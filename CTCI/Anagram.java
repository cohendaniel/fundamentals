/*Write a method to decide if two strings are anagrams or not.*/

import java.util.ArrayList;
import java.lang.String;

public class Anagram {

	public static void main(String[] args) {
		if (args[0].length() != args[1].length())
			return;
		int len = args[0].length();
		char[] str1 = args[0].toCharArray();
		char[] str2 = args[1].toCharArray();
		for (int i = 0; i < len/2; i++) {
			if (str1[i] != str2[len - 1 - i]) {
				System.out.println("Not an anagram.");
				return;
			}
		}
		System.out.println("Anagrams.");
		return;
	}
}