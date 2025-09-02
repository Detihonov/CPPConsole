#include <iostream>

using std::cout;
using std::endl;

int main()
{
    double variable_double = 9.0;
    float variable_float = 4.0;

    cout << sizeof(int) << endl; // 4
    cout << sizeof(variable_double) << endl; // 8
    cout << sizeof(variable_float) << endl; // 4

    // climits
    cout << "\nMIN value for short: " << SHRT_MIN << endl;
    cout << "MAX value for short: " << SHRT_MAX << endl;
    cout << "Unsigned short: " << USHRT_MAX << endl;
    cout << "Nimber of bits in the smallest variable that is not a bit field: " << CHAR_BIT << endl;
}
