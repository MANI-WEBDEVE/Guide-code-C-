#include <iostream>;

using namespace std;

double sum(double a, double b) {
	double sumNum = a + b;
	return sumNum;
}

int main() {
	double number = sum(23.90, 23);
	cout << number << endl;
	return 0;
}