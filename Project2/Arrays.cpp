#include <iostream>

using namespace std;


//int linearSearch(int arr[], int target) {
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] == target) {
//			return i;
//			break;
//		}
//	}
//	return -1;
//}

//void twoPointerApproch(int arr[], int size) {
//	
//	int start = 0;
//	int end = size - 1;
//	while (start < end) {
//		swap(arr[start], arr[end]);
//		start++;
//		end--;
//		
//	}
//}
//int sumOfArr(int arr[], int size) {
//	int sum = 1;
//	for (int i = 1; i < size; i++) {
//		sum = arr[i] * sum;
//	}
//	return sum;
//}

//void  swapMinMax(int arr[], int size) {
//	int maxIndex = 0, minIndex = 0;
//
//	for (int i = 1; i < size; i++) {
//		if (arr[i] > arr[maxIndex]) {
//			maxIndex = i;
//		}
//		if (arr[i] < arr[minIndex]) {
//			minIndex = i;
//		}
//	}
//	swap(arr[maxIndex], arr[minIndex]);
//}

int uniqueVal(int arr[5], int size){
	for (int i = 0; i < size; i++) {
		bool isUnique = true;
		for (int j = 0; j < size; j++) {
			if (i != j && arr[i] == arr[j]) {
				return isUnique = false;
			}
		}
		if (isUnique) {
			return i;
		}
	}
	return -1;
}

int uniqueVal2(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		bool isUnique = true; // Assume karte hain ke element unique hai

		// Check karte hain ke ye element kisi aur ke barabar to nahi
		for (int j = 0; j < size; j++) {
			if (i != j && arr[i] == arr[j]) { // agar same element milta hai
				isUnique = false; // to ye unique nahi hai
				break; // break kar do kyunki ye unique nahi hai
			}
		}

		// Agar unique hai, to return karo
		if (isUnique) {
			return arr[i];
		}
	}

	return -1; // Agar koi unique element nahi mila
}
int main() {
	/*int size = 5;
	int marks[5];

	for (int i = 0; i < size; i++) {
		cin >> marks[i];
	}
	for (int i = 0; i < size; i++) {
		cout << marks[i] << endl;
	}
	*/
	//int number[5] = { 20,90,70,-9,5 };
	//int size = sizeof(number) / sizeof(int);
	/*int smallest = INT_MAX;
	int largest = INT_MIN;
	int size = 5;
	for(int i =0; i < size; i++ ) {
		if (number[i] < smallest) {
			smallest = i;
		}
	}
		cout << smallest << endl;
		cout << largest << endl;*/
	//int target = 9;
	/*int result;
	for (int i = 0; i < size; i++) {
		if (number[i] == target) {
			result  =  i;
			break;	
		}
	} 
	
	cout << result << endl;*/

	//cout << linearSearch(number, target) << endl;

	// two pointer approch;

	/*twoPointerApproch(number, size);
	for (int i = 0; i < size; i++) {
		cout << number[i] << endl;
	}*/

	int arrays2[6] = { 1,2,2,44,4 };
	int size = sizeof(arrays2) / sizeof(int);
	/*int result = sumOfArr(arrays2, size);
	cout << result << endl;*/
	/*cout << "Original array: ";
	for (int i = 0; i < size; i++) {
		cout << arrays2[i] << " ";
	}
	cout << endl;

	swapMinMax(arrays2, size);

	cout << "reverse arrays: ";
	for (int i = 0; i < size; i++) {
		cout << arrays2[i] << " ";
	}

	cout << endl;*/
	int arr[] = { 4, 3,3,6,5, 2, 4, 2 }; // Example array with unique element 3
	int size = sizeof(arr) / sizeof(arr[0]);

	int result = uniqueVal2(arr, size);
	if (result != -1) {
		cout << "Unique value is: " << result << endl;
	}
	else {
		cout << "No unique value found." << endl;
	}



	return 0;

}