#include <iostream>
#include <vector>;
using namespace std;

void reverseCharater(vector<int>& vec){
	int start = 0;
	int end = vec.size() - 1;
	while (start < end) {
		int temp = vec[start];
		vec[start] = vec[end];
		vec[end] = temp;
		start++;
		end--;
	}

}



//int main() {
	//vector<int>vec(3, 3);
	//vector<char>vec2 = { 'a', 'b', 'c', 'd' };


	//vec2.push_back('e'); // add the value on the last of vector;
	//vec2.pop_back(); // remove the value on the last  of vector;
	//cout << "size = " << vec2.size() << endl; // size method check the length of vector
	//cout << "first value = " << vec2.front() << endl; // return the first value of vector 
	//cout << "last value = " << vec2.back() << endl;  // return the last value of vector
	//cout << "Access the particulare value of vector = " << vec2.at(3) << endl;  // return the particular value of the vector
	//for (char val : vec2) {
	//	cout << val  << endl;
	//}

	//vector<int> vec = { 9,8,7,6,5,4,3,2,1 };
	//reverseCharater(vec);

	//for (int i = 0; i < vec.size(); i++) {
		//cout << vec[i] << " " << endl;
	//}
	//cout << endl;
	//return 0;

//}