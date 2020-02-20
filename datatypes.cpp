#include <iostream>
#include <climits>
#include <float.h>
using std::cout;

int main()
{
    // integral data types
    short a;
    int b;
    long c;
    long long d;

    // only positive values 
    unsigned short e;
    unsigned int f;
    unsigned long g;
    unsigned long long h;

    // shows unsinged max of short
    cout << USHRT_MAX << std::endl;

    // 8 bit for character or single digit number
    // after 128 there is overflow unless you do unsigned
    char i = 'A';
    cout << i << std::endl;
    // print out as number based on ascii
    cout << (int) i << std::endl;

    // booleans
    bool found = false;
    cout << std::boolalpha << found << std::endl;
    cout << found << std::endl;

    // floats
    float j;
    double k = 7.7E4;
    long double l;
    cout << k;

    // float
    j = 10.0 / 3;
    j = j * 10000000000;
    cout << std::fixed << a << std::endl;
    cout << LDBL_DIG << std::endl;

}