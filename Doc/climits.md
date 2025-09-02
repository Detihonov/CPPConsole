[Вернуться назад](/README.md)

## The climits Header
---
```cpp
#include <climits>
```

- Describes the characteristics of **integral** types for the specific system and compilern implementation used.
- These includes provide constants which help us determine the precision of our primitive types:
    **SHRT_MIN**, **SHRT_MAX**, **USHRT_MAX**, **INT_MIN**, **INT_MAX**, etc.

#### Example

**INT_MAX** shows us what the maximum value is that we can store in an integer variable on our machine.

```cpp
 // climits
 cout << "\nMIN value for short: " << SHRT_MIN << endl;
 cout << "MAX value for short: " << SHRT_MAX << endl;
 cout << "Unsigned short: " << USHRT_MAX << endl;
 cout << "Nimber of bits in the smallest variable that is not a bit field: " << CHAR_BIT << endl;
 ```

 Console:

 ```
  MIN value for short: -32768
  MAX value for short: 32767
  Unsigned short: 65535
  Nimber of bits in the smallest variable that is not a bit field: 8
```
    
[C and C++ Integer Limits](https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170)