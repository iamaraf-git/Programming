// C++ program to illustrate call-by-methods

#include <bits/stdc++.h>
using namespace std;

// Pass-by-Value
int square1(int n)
{
	// Address of n in square1() is not the same as n1 in
	// main()
	cout << "address of n1 in square1(): " << &n << "\n";

	// clone modified inside the function
	n *= n;
	return n;
}
// Pass-by-Reference with Pointer Arguments
void square2(int* n)
{
	// Address of n in square2() is the same as n2 in main()
	cout << "address of n2 in square2(): " << n << "\n";

	// Explicit de-referencing to get the value pointed-to
	*n *= *n;
}
// Pass-by-Reference with Reference Arguments
void square3(int& n)
{
	// Address of n in square3() is the same as n3 in main()
	cout << "address of n3 in square3(): " << &n << "\n";

	// Implicit de-referencing (without '*')
	n *= n;
}
void geeks()
{
	// Call-by-Value
	int n1 = 8;
	cout << "address of n1 in main(): " << &n1 << "\n";
	cout << "Square of n1: " << square1(n1) << "\n";
	cout << "No change in n1: " << n1 << "\n";

	// Call-by-Reference with Pointer Arguments
	int n2 = 8;
	cout << "address of n2 in main(): " << &n2 << "\n";
	square2(&n2);
	cout << "Square of n2: " << n2 << "\n";
	cout << "Change reflected in n2: " << n2 << "\n";

	// Call-by-Reference with Reference Arguments
	int n3 = 8;
	cout << "address of n3 in main(): " << &n3 << "\n";
	square3(n3);
	cout << "Square of n3: " << n3 << "\n";
	cout << "Change reflected in n3: " << n3 << "\n";
}
// Driver program
int main() { geeks(); }




// Reference and pointers both can be used to refer the actual variable they provide the direct access to the variable.
// 
// But, references have some advantages over the pointer variables, those are:
// 
// // // In pointers - To access the value of actual variable, we need to explicitly deference the pointer variable by using ‘value at address’ operator/ dereferencing operator (*).
// 
// // // In references - To access the value of actual variable, we do not need to explicitly dereference the reference variable, they gets de-referenced automatically.
// 
// 
// // // Reference variables are cleaner and modish as compare to the pointers; they can also be used while passing in the function as arguments, known as call by references.
// 
