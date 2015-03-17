import java.util.Vector;
import java.lang.String;

public class Reverse {

	public static void main(String[] args) {
		char[] s = args[0].toCharArray();
		reverse(s);
		System.out.println(s);
		String t = new String(s);
		int j = 0;
		while (t.indexOf(" ", j) != -1) {
			int k = t.indexOf(" ", j);
			System.out.print(reverse(t.substring(j,k-1).toCharArray()));
			j = k;
		}
	}
	
	private static char[] reverse(char[] s) {
		for (int i = 0; i < s.length/2+1; i++) {
			char c = s[s.length-i-1];
			s[s.length-i-1] = s[i];
			s[i] = c;
		}
		return s;
	}
}