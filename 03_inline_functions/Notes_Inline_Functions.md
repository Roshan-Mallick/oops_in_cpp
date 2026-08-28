# Inline Functions in C++

Inline functions are functions for which the compiler may replace a function call with the function's code.

---

# What Is an Inline Function?

An inline function is declared using the `inline` keyword.

Syntax:

```cpp
inline return_type function_name(parameters) {
    // Function body
}
```

Example:

```cpp
inline void display() {
    cout << "Hello" << endl;
}
```

---

# Why Use Inline Functions?

A normal function call involves function call overhead.

For small functions, an inline function may reduce this overhead by allowing the compiler to insert the function code directly where the function is called.

Example:

```text
Normal function call
        ↓
Function call overhead
        ↓
Function executes
```

With an inline function:

```text
Function call
        ↓
Compiler may insert function code directly
```

> The `inline` keyword is a request to the compiler. The compiler may choose not to inline the function.

---

# Basic Inline Function

File:

```text
01_basic_inline_function.cpp
```

Example:

```cpp
#include <iostream>

using namespace std;

inline void display() {
    cout << "This is an inline function" << endl;
}

int main() {
    display();

    return 0;
}
```

Output:

```text
This is an inline function
```

---

# Inline Member Function Inside a Class

File:

```text
02_inline_function_inside_class.cpp
```

An inline member function can be defined inside a class.

Example:

```cpp
class test {
public:
    inline void display() {
        cout << "This is an inline member function" << endl;
    }
};
```

The function is called using an object:

```cpp
test t1;

t1.display();
```

Output:

```text
This is an inline member function
```

---

# Inline Function Defined Outside a Class

File:

```text
03_inline_function_outside_class.cpp
```

First, declare the member function inside the class:

```cpp
class test {
public:
    void display();
};
```

Then, define it outside the class using the `inline` keyword and the scope resolution operator `::`:

```cpp
inline void test::display() {
    cout << "This is an inline function outside the class" << endl;
}
```

The function is called using an object:

```cpp
test t1;

t1.display();
```

Output:

```text
This is an inline function outside the class
```

---

# Scope Resolution Operator

When a member function is defined outside the class, the scope resolution operator `::` is used.

Example:

```cpp
test::display()
```

This tells C++ that `display()` belongs to the `test` class.

---

# Advantages of Inline Functions

- Can reduce function call overhead for small functions.
- Useful for frequently called small functions.
- Can improve readability by keeping small operations as functions.
- May improve performance in some cases.

---

# Disadvantages of Inline Functions

- Large inline functions can increase the program's code size.
- Excessive inlining can negatively affect performance.
- The compiler is not required to inline a function.
- Inline functions are generally not suitable for large or complex functions.

---

# Use Cases

Inline functions are commonly suitable for:

- Small functions with simple operations.
- Frequently called functions.
- Getter and setter functions.
- Small member functions inside classes.

Example:

```cpp
inline int square(int number) {
    return number * number;
}
```

### Simple Rule

```text
Small and frequently called function
        ↓
Good candidate for inline

Large or complex function
        ↓
Usually not a good candidate for inline
```

---

# Important Points

- An inline function uses the `inline` keyword.
- Inline functions are generally suitable for small functions.
- The compiler decides whether the function is actually inlined.
- A member function can be declared and defined inside a class.
- An inline member function can also be declared inside a class and defined outside it.
- The scope resolution operator `::` is used when defining a class member function outside the class.

---

# Files Covered

```text
03_inline_functions/
├── 01_basic_inline_function.cpp
├── 02_inline_function_inside_class.cpp
├── 03_inline_function_outside_class.cpp
└── Notes_Inline_Functions.md
```

---

# Summary

```text
01 Basic Inline Function
        ↓
02 Inline Function Inside a Class
        ↓
03 Inline Function Outside a Class
        ↓
Inline Functions Completed
```
