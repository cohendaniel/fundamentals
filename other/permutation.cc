/* Prints all permutations of a string given in the command line using recursion
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void permute(string s, int start, int end);
string swap (int a, int b, string s);

int count = 0;

int main(int argc, char *argv[]){
	string str = string(argv[1]);
	permute(str, 0, str.length());
	cout << "Number of permutations: " << count << endl;
	return 0;
}

void permute(string s, int start, int end) {
	if (start == end) {
		cout << s << endl;
		count++;
	}
	else {
		for (int i = start; i < end; i++) {
			s = swap(start, i, s);
			permute(s, start + 1, end);
			s = swap(start, i, s);
		}
	}
}

string swap (int a, int b, string s) {
	char temp = s[a];
	s[a] = s[b];
	s[b] = temp;
	return s;
}