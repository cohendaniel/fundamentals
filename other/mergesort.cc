#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

vector<int> merge_sort(vector<int> list);
vector<int> merge(vector<int>left, vector<int>right);

int main(int argc, char *argv[]){
	vector<int> arr;
	for (int i = 1; i < argc; i++) {
		arr.push_back(atoi(argv[i]));
	}
	arr = merge_sort(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

vector<int> merge_sort(vector<int> list) {
	if (list.size() < 2) {
		return list;
	}
	vector<int> left;
	vector<int> right;
	int mid = list.size()/2;
	for (int i = 0; i < mid; i++) {
		left.push_back(list[i]);
	}
	for (int i = mid; i < list.size(); i++) {
		right.push_back(list[i]);
	}
	left = merge_sort(left);
	right = merge_sort(right);
	return merge(left, right);
}

vector<int> merge(vector<int> left, vector<int> right) {
	vector<int> result;
	int left_ptr = 0;
	int right_ptr = 0;
	while (left_ptr < left.size() && right_ptr < right.size()) {
		if (left[left_ptr] <= right[right_ptr]) {
			result.push_back(left[left_ptr]);
			left_ptr++;
		}
		else {
			result.push_back(right[right_ptr]);
			right_ptr++;
		}
	}
	while (left_ptr < left.size()) {
		result.push_back(left[left_ptr]);
		left_ptr++;
	}
	while (right_ptr < right.size()) {
		result.push_back(right[right_ptr]);
		right_ptr++;
	}
	return result;
}