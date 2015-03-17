#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

void quick_sort(int a[], int lo, int hi);
int partition(int a[], int lo, int hi);

void quick_sort(int a[], int lo, int hi) {
	if (lo < hi) {
		int pivot = partition(a, lo, hi);
		quick_sort(a, lo, pivot - 1);
		quick_sort(a, pivot + 1, hi);
	}
}

int partition(int a[], int lo, int hi) {
	int pivot = a[hi];
	int i = lo - 1;
	for (int j = lo; j < hi; j++) {
		if (a[j] <= pivot) {
			i++;
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	a[hi] = a[i+1];
	a[i+1] = pivot;
	return i+1;
}

/*int main(int argc, char *argv[]){
	cout << "Number to sort: " << argc - 1 << endl;
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
	return 0;
}*/