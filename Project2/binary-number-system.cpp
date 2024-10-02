#include <iostream>;

using namespace std;

// covert the dcimal number to binary form;

int decimalBinary(int decimal) {
	int ans = 0;
	int power = 1;
	int rem;

	while (decimal > 0) {
		rem = decimal % 2;
		decimal = decimal / 2;

		ans += (rem * power);
		power = power * 10;
	}
	return ans;
 
}

int binaryToDec(int decimal) { 
	int ans = 0;
	int power = 1;
	int remainder;

	while (decimal > 0) {
		remainder = decimal % 2;
		decimal /= 10;

		ans += (remainder * power);
		power *= 2;


	}
	return ans;
}

int main() {
	cout << decimalBinary(101)<< endl;
	cout << binaryToDec(1100101) << endl;
	return 0;
}