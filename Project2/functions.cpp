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
//int factorialNumber(int num, int rc) {
//	int facN = 1;
//	int facR = 1;
//	int facNRCS = 1;
//	int initialResult = 0;
//	for (int i = 1; i <= num; i++) {
//		facN *= i;
//	}	
//
//	for (int i = 1; i <= rc; i++) {
//		facR *= i;
//	}
//	
//	int facNRC = num - rc;
//	for (int i = 1; i <= facNRC; i++) {
//		facNRCS *= i;
//	}
//
//	initialResult = facR * facNRCS;
//	int result = facN / initialResult;
//	return result;
//
//
//}

// check if a number is Prime or Not;
int Prime(int num) {
    // Handle edge cases
    if (num <= 1) {
        cout << num << " is not a prime number (0 and 1 are not prime)." << endl;
        return 0;
    }

    if (num == 2 || num == 3) {
        cout << num << " is a prime number." << endl;
        return 1;  // Return 1 to indicate it's prime
    }

    // Check for divisibility starting from 2
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            return 0;  // Return 0 to indicate it's not prime
        }
    }

    // If no divisors found, it's prime
    cout << num << " is a prime number." << endl;
    return 1;
}

// Question print all Prime numbers from 2 to N

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 is not Prime;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // not Prime number;
        }


    }
    return true; // prime number
}

// Question find the fibonacci number;
void printFibonacci(int N) {
    int a = 0, b = 1, NextTerm;
    for (int i = 4; i <= N; i++) {
        NextTerm = a + b;
        cout << NextTerm << " " << endl;
        a = b;
        b = NextTerm;
    }
    cout << endl;

}


int main() {
	//double number = sum(23.90, 23);
	//cout << number << endl;
	//cout << sumNumber(5) << endl;
	//cout << factorialNumber(3) << endl;
	//cout << sumDigits(2356) << endl;
	//cout << factorialNumber(8, 2) << endl;
	//Prime(7);

    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    /*cout << "Prime numbers from z to " << N << "are: " << endl;


    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " " << endl;
        }
    }
	return 0;*/

    printFibonacci(N);
} 