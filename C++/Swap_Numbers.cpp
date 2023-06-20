#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;
	
	//Initialize
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    
    // Assign temporary variable the value of 'num1' ; to preserve value of 'num1'
	temp = num1;
	
	// Now Assign 'num1' the value of 'num2' ; to assign value of 'num2' to 'num1'
	num1 = num2;
	
	// Finally assign back the value stored in 'temp' (as temp=num1) to 'num2'; Now the values are swapped
	num2 = temp;
	
	//Display output
    cout << "After swapping, the first number is: " << num1 << std::endl;
    cout << "After swapping, the second number is: " << num2 << std::endl;

    return 0;
}
