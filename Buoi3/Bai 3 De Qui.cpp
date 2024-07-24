#include <iostream>
#include <vector>
using namespace std;

int binarySearchRecursive(const vector<int>& arr, int left, int right, int x) {
	if (right >= left) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == x) return mid;
		if (arr[mid] > x) return binarySearchRecursive(arr, left, mid - 1, x);
		return binarySearchRecursive(arr, mid + 1, right, x);
	}
	return -1;
}

int main() {
	vector<int> arr = { 2, 3, 4, 10, 40 };
	int x = 10;
	int result = binarySearchRecursive(arr, 0, arr.size() - 1, x);
	if (result != -1)
		cout << "Phan tu duoc tim thay tai chi so: " << result << endl;
	else
		cout << "Phan tu khong duoc tim thay" << endl;
	cin.get();
	return 0;
}
