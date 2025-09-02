#include <iostream>

using std::cout;
using std::endl;

int main()
{
    double variable_double = 9.0;
    float variable_float = 4.0;

    cout << sizeof(int) << endl; // 4
    cout << sizeof(variable_double) << endl; // 8
    cout << sizeof(variable_float); // 4
}
