#include <iostream>
#include <vector>
using namespace std;

int sumArrayRecursive(const vector<int>& arr, int left, int right) {
	if (left > right) return 0;
	if (left == right) return arr[left];
	int mid = left + (right - left) / 2;
	return sumArrayRecursive(arr, left, mid) + sumArrayRecursive(arr, mid + 1, right);
}

int main() {
	vector<int> arr = { 1, 2, 3, 4, 5, 6 }; 
	cout << "Tong cua mang la: " << sumArrayRecursive(arr, 0, arr.size() - 1) << endl;
	cin.get(); 
	return 0;
}
