//// CPP program to demonstrate working of array
//#include <algorithm>
//#include <array>
//#include <iostream>
//#include <iterator>
//#include <string>
//using namespace std;
//
//int main() {
//
//	// construction uses aggregate initialization
//	// double-braces required
//	array<int, 5> ar1{ {3, 4, 5, 1, 2} };
//	array<int, 5> ar2 = { 1, 2, 3, 4, 5 };
//	array<string, 2> ar3 = { {string("a"), "b"} };
//
//	cout << "Sizes of arrays are" << endl;
//	cout << ar1.size() << endl;
//	cout << ar2.size() << endl;
//	cout << ar3.size() << endl;
//
//	cout << "\nInitial ar1 : ";
//	for (auto i : ar1)
//		cout << i << ' ';
//
//	// container operations are supported
//	sort(ar1.begin(), ar1.end());
//
//	cout << "\nsorted ar1 : ";
//	for (auto i : ar1)
//		cout << i << ' ';
//
//	// Filling ar2 with 10
//	ar2.fill(10);
//
//	cout << "\nFilled ar2 : ";
//	for (auto i : ar2)
//		cout << i << ' ';
//
//
//	// ranged for loop is supported
//	cout << "\nar3 : ";
//	for (auto& s : ar3)
//		cout << s << ' ';
//
//	return 0;
//}




#include <iostream>
#include <array>
using namespace std;

int main() {

	// a)[] Operator : This is similar to the normal array, we use it to access the element store at index ‘i’ .

	array <char, 3> arr = { 'G','f','G' };
	cout << arr[0] << " " << arr[2] << endl;


	// b) front() and back() function: These methods are used to access the firstand the last element of the array directly.


	array <int, 3> arr1 = { 'G','f','G' }; // ASCII val of 'G' =71
	cout << arr1.front() << " " << arr1.back() << endl;

	// c) swap( ) function: This swap function is used to swap the content of the two arrays.

	array <int, 3> arr2 = { 'G','f','G' };  // ASCII val of 'G' =71
	array <int, 3> arr3 = { 'M','M','P' }; // ASCII val of 'M' = 77 and 'P' = 80
	arr2.swap(arr3);  // now arr = {M,M,P}
	cout << arr2.front() << " " << arr2.back() << endl;

	// d) empty( ) function: This function is used to check whether the declared STL array is empty or not, if it is empty then it returns true else false.

	array <int, 3> arr4 = { 'G','f','G' };  // ASCII val of 'G' =71
	array <int, 3> arr5 = { 'M','M','P' }; // ASCII val of 'M' = 77 and 'P' = 80
	bool x = arr4.empty(); // false ( not empty)
	cout << boolalpha << x << endl;

	// e) at( ) function: This function is used to access the element stored at a specific location, if we try to access the element which is out of bounds of the array size then it throws an exception. 

	array <int, 3> arr6 = { 'G','f','G' };  // ASCII val of 'G' =71
	array <int, 3> arr7 = { 'M','M','P' }; // ASCII val of 'M' = 77 and 'P' = 80
	cout << arr6.at(2) << " " << arr7.at(2) << endl;
	//cout<< arr.at(3); // exception{Abort signal from abort(3) (SIGABRT)}

	// f) fill( ) function: This is specially used to initialize or fill all the indexes of the array with a similar value.

	array <int, 5> arr8;
	arr8.fill(1);
	for (int i : arr8)
		cout << arr8[i] << " " << endl;

	// g) size( ) or max_size( ) and sizeof( ) function: Both size( ) or max_size( ) are used to get the maximum number of indexes in the array while sizeof( ) is used to get the total size of array in bytes.

	array <int, 10> arr9;
	cout << arr9.size() << '\n'; // total num of indexes
	cout << arr9.max_size() << '\n'; // total num of indexes
	cout << sizeof(arr9) << endl; // total size of array

	// h) data( ): This function returns the pointer to the first element of the array object. Because elements in the array are stored in contiguous memory locations. This data( ) function return us the base address of the string/char type object.

	const char* str = "GeeksforGeeks";
	array<char, 13> arr10;
	memcpy(arr10.data(), str, 13);
	cout << arr10.data() << '\n';


	return 0;

}
