# Member Functions in C++

## What is a Member Function?

A **member function** is a function declared inside a class.

Member functions are used to perform operations related to the objects of that class.

Example:

```cpp
class test {

public:

    void display();
};
```

Here, `display()` is a member function of the `test` class.

---

## Member Function Defined Inside the Class

A member function can be declared and defined directly inside the class.

### Syntax

```cpp
class ClassName {

public:

    void functionName() {

        // Function body

    }
};
```

### Example

```cpp
class test {

public:

    void display() {

        cout << "Member function defined inside the class." << endl;

    }
};
```

In this case, the function is both **declared and defined inside the class**.

---

## Member Function Defined Outside the Class

A member function can be declared inside the class and defined outside the class.

### Syntax

```cpp
class ClassName {

public:

    void functionName();

};

void ClassName::functionName() {

    // Function body

}
```

The `::` operator is used when defining the member function outside the class.

---

## Scope Resolution Operator

`::` is called the **scope resolution operator**.

Example:

```cpp
void test::display()
```

Here:

* `test` is the class name.
* `::` is the scope resolution operator.
* `display()` is the member function.

It tells C++ that `display()` belongs to the `test` class.

---

## Calling a Member Function

A member function is called using an object and the dot `.` operator.

### Syntax

```cpp
objectName.functionName();
```

### Example

```cpp
test obj;

obj.display();
```

Here:

* `obj` is an object of the `test` class.
* `.` is the dot operator.
* `display()` is the member function being called.

---

## Calling Different Member Functions

A class can contain multiple member functions.

Example:

```cpp
test obj;

obj.inside_fn();
obj.outside_fn();
```

Both member functions are called using the same object.

---

## Structure

```text
test (Class)
│
├── inside_fn()
│   └── Defined inside the class
│
└── outside_fn()
    ├── Declared inside the class
    └── Defined outside the class using ::
          │
          ▼
       Object
          │
          ▼
         obj
       /     \
      ▼       ▼
inside_fn() outside_fn()
```

---

## Programs Practiced

```text
01_function_inside_class.cpp
02_function_outside_class.cpp
03_call_member_function.cpp
```

---

## Important Points

* A function declared inside a class is called a member function.
* A member function can be defined inside the class.
* A member function can be declared inside the class and defined outside the class.
* The `::` operator is called the scope resolution operator.
* The scope resolution operator is used to define a class member function outside the class.
* Member functions are called using an object.
* The dot `.` operator is used to call a public member function through an object.
* One object can call multiple member functions of its class.
