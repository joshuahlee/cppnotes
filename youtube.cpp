#include <iostream> // preprocessor includes everything after # into our file and makes it available to us
#include <cmath>

// using namespace std; // using directive
// using std::cout; // using declaration location matters

using std::cin;
using std::cout;

// PART 5 YOUR OWN FUNCTIONS
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

// PART 6 VOID
void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}

int main()
{ // main function // the reason why it is int main is because we return an int

    // PART 1 OUTPUT
    // cout << "hello\n";
    // return 0; // lets computer know that everything was okay or remove to implicitly return 0

    // PART 2 STRING CONCAT
    // int slices = 5;
    // cout << "You Have " << slices << " slices of pizza." << std::endl;

    // PART 3 USER INPUT
    // int slices;
    // cout << "How many pieces of pizza do you want: ";
    // cin >> slices;
    // cout << "You Have " << slices << " slices of pizza." << std::endl;

    // PART 4 FUNCTIONS
    // int base, exponent;
    // cout << "What is the base: ";
    // cin >> base;
    // cout << "What is the exponent: ";
    // cin >> exponent;
    // double power = pow(base, exponent);
    // cout << power << std::endl;

    // PART 5 YOUR OWN FUNCTIONS
    // int base, exponent;
    // cout << "What is the base: ";
    // cin >> base;
    // cout << "What is the exponent: ";
    // cin >> exponent;
    // int my_power = power(base, exponent);
    // cout << my_power << std::endl;

    // PART 6 VOID
    double base;
    int exponent;
    cout << "What is the base: ";
    cin >> base;
    cout << "What is the exponent: ";
    cin >> exponent;
    print_pow(base, exponent);
}