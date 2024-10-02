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

int main() {
	cout << decimalBinary(190) << endl;
	return 0;
}