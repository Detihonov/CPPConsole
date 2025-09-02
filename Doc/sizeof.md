[Вернуться назад](/README.md)

## The sizeof Operator
----

- Determines the size in bytes of a type or variable.
- The value range for a type depends on the compiler/platform.The ANSI/ISO standart for C++ does not specify the size for the types - it only specifes that a given type, such as long must not be smaller than the type that appears above it in the type hierarchy.

#### Example

```cpp
    double variable_double = 9.0;
    float variable_float = 4.0;

    cout << sizeof(int) << endl; // 4
    cout << sizeof(variable_double) << endl; // 8
    cout << sizeof(variable_float); // 4
```