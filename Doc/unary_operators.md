[Вернуться назад](/README.md)

## Unary Increment & Decrement Operators
---

**++** for increment. Adds 1 to a variable.
**--** for decrement. Subtracts 1 from a variable.
- Unary since it operates on a single **variable** (<u>not</u> on literals).
- Prefix (the operator is on the left side of the variable): the operation is performed before the rest of the expression evaluates.
- Postfix (the operator is on the right side of the variable): the operation is performed after the rest of the expression has evaluated.
- Prefix is recommended when it does not matter when the increment/decrement operation is performed since modern compilers will produce a shorter block of machine code.

#### Example

```cpp
int x{ 2 }, y{ 5 }, z{ 7 };

int temp = 0;

cout << "X = " << x << "\tY = " << y << "\tZ = " << z << endl;
cout << "++Z / X = " << ++z / x << endl;

cout << "\nX = " << x << "\tY = " << y << "\tZ = " << z << endl;
cout << "X * Y-- = " << x * y-- << endl;

cout << "\nX = " << x << "\tY = " << y << "\tZ = " << z << endl;
```

Console:

```
X = 2   Y = 5   Z = 7
++Z / X = 4

X = 2   Y = 5   Z = 8
X * Y-- = 10

X = 2   Y = 4   Z = 8
```