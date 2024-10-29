#include <iostream>

using namespace std;

int main() {
	int n = 8;
	int arr[8] = { 1,2,-3,-2,-4,5,6,-5 };
	// subAarray algorithum format	
	/*for (int start = 0; start < n; start++) {
		for (int end = start; end < n; end++) {
			for (int i = start; i <= end; i++) {
				cout << arr[i];
			}
			cout << " ";
		}
		cout << endl;
	}*/

	// Brute Force Approch
	//int maxSum = 0;

	/*for (int start =0; start < n; start++){
		int curSum = 0;
		for (int end = start; end < n; end++) {
			curSum = curSum + arr[end];
			maxSum = max(curSum, maxSum);
		}
	}

	cout << maxSum << endl;*/

	// Kadane`s Algorithum
	//int maxSum = 0;
	int maxSum = INT_MIN;
	int curSum = 0;
	for (int i = 0; i < n; i++) {
		curSum += arr[i];
		maxSum = max(maxSum, curSum);
		if (curSum < 0) {
			curSum = 0;
		}
	}
	cout << maxSum << endl;

}