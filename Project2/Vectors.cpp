#include <iostream>
#include <vector>;
using namespace std;




int main() {
	vector<int>vec(3, 3);
	vector<char>vec2 = { 'a', 'b', 'c', 'd' };


	vec2.push_back('e'); // add the value on the last of vector;
	vec2.pop_back(); // remove the value on the last  of vector;
	cout << "size = " << vec2.size() << endl; // size method check the length of vector
	cout << "first value = " << vec2.front() << endl; // return the first value of vector 
	cout << "last value = " << vec2.back() << endl;  // return the last value of vector
	cout << "Access the particulare value of vector = " << vec2.at(3) << endl;  // return the particular value of the vector
	for (char val : vec2) {
		cout << val  << endl;
	}

	return 0;

}