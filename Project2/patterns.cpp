//#include <iostream>;
//
//using namespace std;
//int main() {
//	// simple pattern for loop;
//	int n = 4;
//	//for (int i = 0; i < n; i++) { //outer loop
//		//for (int j = 1; j <= n; j++) { // inner loop
//			//cout << j;	
//		//}	
//		//cout << endl;
//	//}
//
//	// for loop with pattern star format;
//	/*for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}*/
//
//	// for loop with pattern Character format;
//	/*for (int i = 0; i < n; i++) {
//		char ch = 'A';
//		for (int j = 0; j < n; j++) {
//			cout << ch << " ";
//			ch++;
//		}
//		cout << endl;
//	}*/
//
//	// write a loop for print number sequence;
//	/*int num = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			num = num + 1;
//			cout << num << " ";
//		}
//		cout << endl;
//	}*/
//
//	
//	// write a loop for print sequence Alphabet character;
//	//char ch = 'A';
//	 
//	/*for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << ch << " ";
//			ch++;
//		}
//		cout << endl;
//	}*/
//
//
//	// write a pattern for number star;
//	//*
//	//**
//	//***
//	//****
//	//*****
//
//	/*for (int i=0; i<n; i++) {
//		for (int j=0; j<i+1; j++) {
//			cout << "*" << " ";
//		}
//		cout << endl;
//	}*/
//
//
//	// write a pattern for number traingle;
//	// 1
//	// 2 2
//	// 3 3 3
//	// 4 4 4 4
//	// 5 5 5 5 5
//	/*int number = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < i + 1; j++) {
//			cout << number << " ";
//		}
//			number++;
//		cout << endl;
//	}*/
//
//		
//	// write a pattern for alphabet traingle;
//	//A
//	//BB
//	//CCC
//	//DDDD
//	//EEEEE
//	/*char character = 'A';
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < i + 1; j++) {
//			cout << character;
//		}
//		character++;
//		cout << endl;
//	}*/
//
//	// write a pattern for sequence number;
//	// 1
//	// 1 2
//	// 1 2 3
//	// 1 2 3 4
//	for (int i =1; i<n; i++){
//		int num = 1;
//		for (int j=1; j<i+1; j++){
//			//cout << j;
//			//num++;
//		}
//		//cout << endl;
//	}
//	// second logic this pattern
//	for (int i = 0; i < n; i++) {
//		int num = 1;
//		for (int j = 1; j <= i + 1; j++) {
//			//cout << j;
//			//num++;
//		}
//		//cout << endl;
//	}
//
//	// write the rerverse pattern of number;
//	// 1
//	// 2 1
//	// 3 2 1
//	// 4 3 2 1
//	// //./////////
//	// n = 4;
//	for (int i = 0; i < n; i++) {
//		for (int j = i+1; j > 0; j--) {
//			//cout << j << " ";
//
//		}
//		//cout << endl;
//	}
//
//	// write a floyd`s traingle pattern;
//	/*
//	A
//	B C
//	D E F
//	G H I J
//	*/
//	//char ch = 'A';
//	for(int i=0; i<n; i++) {
//		for (int j = i + 1; j > 0; j--) {
//			//cout << ch << " ";
//			//ch++;
//		}
//		//cout << endl;
//	}
//
//
//	// write a inverted traingle loop of Number;
//	/*
//	ABCD
//	 EFG
//	  HI
//	   J
//	*/
//	//char ch = 'A';
//	for (int i = 0; i <= n; i++) {
//		// Print Spaces;
//		for (int j = 0; j < i; j++) {
//			//cout << " ";
//		}
//		// Print Character and Number for inveted traingle;
//		for (int j = 0; j < n-i; j++) {
//			//cout << (ch);
//			//ch++;
//		}
//		//cout << endl;
//	}
//	
//
//	// write a code for pyramid pattern;
//	/*
//	  1
//	 121
//	12321
//   1234321
//	*/
//	for (int i = 0; i<n; i++) {
//		// spaces print;
//		for (int j = 0; j < n - i -1; j++) {
//			//cout << " ";
//		}
//		// print left side number;
//		for (int j = 1; j <= i + 1; j++) {
//			//cout << j;
//		}
//		// right side number pattern;
//		for (int j = i; j>0; j--) {
//			//cout << j;
//		}
//		//cout << endl;
//	}
//
//	// write a program to print hollow diamond pattern;
//	/*
//	/////////
//	   *
//	  * *
//	 *   *
//	*     *
//   *       *
//	//////////
//	*/
//	// top
//	//for (int i = 0; i < n; i++) {
//	//	//spaces
//	//	for (int j = 0; j < n - i - 1; j++) {
//	//		cout << " ";
//	//	}
//	//	cout << "*";
//	//	if (i != 0) {
//	//		//spaces
//	//		for (int j = 0; j < 2 * i - 1; j++) {
//	//			cout << " ";
//	//		}
//	//		cout << "*";
//	//	}
//	//	cout << endl;
//	//}
//	//for (int i = 0; i < n - 1; i++) {
//	//
//	//		for (int j = 0; j < i + 1; j++) {
//	//			cout << " ";
//	//		}
//	//		cout << "*";
//	//
//	//		if (i != n - 2) {
//
//	//		for (int j = 0; j < 2 * (n - i) - 5; j++) {
//	//			cout << " ";
//	//		}
//	//		cout << "*";
//	//	}
//	//
//	//	cout << endl;
//	//}
//	/*
//	*      *
//	**    **
// 	***	 ***
//	********
//	********
//	***	 ***
//	**    **
//	*      *
//
//	*/
//			
//	for (int i =0; i<n; i++){
//		for (int j = 0; j < i + 1; j++) {
//			cout << "*";
//		}	
//
//		for (int j = n; j < n - i; j--) {
//			cout << " ";
//		}
//
//		for (int j = 0; j < i; j++) {
//			cout << "*";
//		}
//
//		cout << endl;
//	}
//	//for(int i=0; i<n; i++){//sapces
//	//	for (int j = 0; j < n - i - 1; j++) {
//	//		cout << " ";
//	//	}
//	//	// star;
//	//	for (int j = 0; j < i + 1; j++) {
//	//		cout << "*";
//	//		}
//	//	cout << endl;
//	//}
//		
//	return 0;
//}

		