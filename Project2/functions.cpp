#include <iostream>;

using namespace std;

//double sum(double a, double b) {
//	double sumNum = a + b;
//	return sumNum;
//}

//int sumNumber(int num) {
//	int sum = 0;
//
//	for (int i = 1; i <= num; i++) {
//		sum += i;
//	}
//		return sum;
//}

//int factorialNumber(int num) {
//	int fac = 1; 
//	
//	for (int i = 1; i <= num; i++) {
//		fac *= i;
//	
//	}
//	
//	return fac;
//}

// Pass by Value concept ;

//int sumDigits(int x) {
//	int sum = 0;
//	while (x > 0) {
//		int lastDigit = x % 10;
//		x /= 10;
//
//		sum += lastDigit;
//	}
//	return sum;
//}


// Bionomail confficient 
int factorialNumber(int num, int rc) {
	int facN = 1;
	int facR = 1;
	int facNRCS = 1;
	int initialResult = 0;
	for (int i = 1; i <= num; i++) {
		facN *= i;
	}	

	for (int i = 1; i <= rc; i++) {
		facR *= i;
	}
	
	int facNRC = num - rc;
	for (int i = 1; i <= facNRC; i++) {
		facNRCS *= i;
	}

	initialResult = facR * facNRCS;
	int result = facN / initialResult;
	return result;


}


int main() {
	//double number = sum(23.90, 23);
	//cout << number << endl;
	//cout << sumNumber(5) << endl;
	//cout << factorialNumber(3) << endl;
	//cout << sumDigits(2356) << endl;
	cout << factorialNumber(8, 2) << endl;
	return 0;
}