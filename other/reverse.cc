#include <iostream>
#include <string>
//note in place, all acting on same string (pointers to same char array)
using namespace std;

int main(int argc, char *argv[]){
	char* str = argv[1];
	char* end = str;
	int count = 0;
	//get the end pointer in right position
	while (*end) {
		count++; //for printing purposes
		end++;
	}
	end--; //point to last character
	while (str < end) { //when they reach in the middle
		char temp = *str; 
		*str = *end; //swap chars at pointer spots
		*end = temp; //put in right char swap
		str++; end--; //move pointers toward middle
	}
	cout << str - count/2 << endl;;
}
