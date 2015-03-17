#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#include "quicksort.cc"

using namespace std;

int binary_search(int a[], int left, int right, int x);

int binary_search(int a[], int left, int right, int x) {
	int mid = -1;
	while (left <= right) {
		mid = (right + left)/2;
		if (a[mid] == x) {
			return 1;
		}
		else if (a[mid] < x) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	int len = argc - 1;
	int a[len];
	for (int i = 0; i < len; i++) {
		a[i] = atoi(argv[i+1]);
	}
	quick_sort(a, 0, len);
	for (int i = 0; i < len; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	if (binary_search(a, 0, len, 8)) {
		cout << "We founds the number, precious" << endl;
	}
	else { cout << "Not found." << endl; }
	return 0;
}