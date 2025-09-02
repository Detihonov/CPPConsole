#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void PrintChar();
void Chars();
void Floating();

int main()
{
    Floating();
}

void PrintChar()
{
    // Названия управляющих символов (0–31 и 127)
    string controlNames[33] = {
        "NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL",
        "BS",  "TAB", "LF",  "VT",  "FF",  "CR",  "SO",  "SI",
        "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB",
        "CAN", "EM",  "SUB", "ESC", "FS",  "GS",  "RS",  "US",
        "DEL"
    };

     cout << left << setw(10) << "DEC"
         << setw(10) << "CHAR"
         << "DESCRIPTION" << endl;
     cout << "-----------------------------------" << endl;

    for (int i = 0; i < 128; i++) {
        cout << left << setw(10) << i;

        if (i < 32) {
            cout << setw(10) << " " << controlNames[i];
        }
        else if (i == 127) {
            cout << setw(10) << " " << controlNames[32];
        }
        else {
            cout << setw(10) << (char)i << "printable";
        }
        cout << endl;
    }
}

void Chars()
{
    char symbol = 125;
    wchar_t symbolw = 91;

    char16_t symbolt16 = 125;
    char32_t symbolt32 = 129;

    cout << symbol << endl; // }
    wcout << symbolw << endl; // [
}

void Strings()
{

}

void Floating()
{
    float cakeLeft = 6.8;

    cout << cakeLeft << endl;
}