#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x{ 2 }, y{ 5 }, z{ 7 };

    int temp = 0;

    cout << "X = " << x << "\tY = " << y << "\tZ = " << z << endl;
    cout << "++Z / X = " << ++z / x << endl;

    cout << "\nX = " << x << "\tY = " << y << "\tZ = " << z << endl;
    cout << "X * Y-- = " << x * y-- << endl;
    
    cout << "\nX = " << x << "\tY = " << y << "\tZ = " << z << endl;
}