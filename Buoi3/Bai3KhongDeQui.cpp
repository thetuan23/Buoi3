#include <iostream>
#include <vector>
using namespace std;

int binarySearchNonRecursive(const vector<int>& arr, int x) {
	int left = 0, right = arr.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == x) return mid;
		if (arr[mid] < x) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main() {
	vector<int> arr = { 2, 3, 4, 10, 40 }; 
	int x = 10;
	int result = binarySearchNonRecursive(arr, x);
	if (result != -1)
		cout << "Phan tu duoc tim thay tai chi so: " << result << endl;
	else
		cout << "Phan tu khong đuoc tim thay" << endl;
	cin.get();
	return 0;
}
