# Classes and Objects in C++

## What is a Class?

A **class** is a user-defined data type used to group related data and functions together.

A class can contain:

- Data members
- Member functions

---

## Basic Class Syntax

```cpp
class ClassName {

public:

    // Data members

    // Member functions
};
```

A class definition must end with a semicolon `;`.

---

## What is an Object?

An **object** is an instance of a class.

### Syntax

```cpp
ClassName objectName;
```

### Example

```cpp
student s1;
student s2;
```

Here:

- `student` is the class.
- `s1` and `s2` are objects of the `student` class.

One class can be used to create multiple objects.

---

## Data Members

Variables declared inside a class are called **data members**.

### Example

```cpp
int roll;
string name;
```

In this example, `roll` and `name` are data members of the `student` class.

---

## Access Specifier

`public` is an access specifier.

```cpp
public:
```

Data members declared under `public` can be accessed outside the class using an object.

---

## Accessing Data Members

The **dot operator `.`** is used to access public data members through an object.

### Example

```cpp
s1.roll = 1177;
s1.name = "Roshan";
```

Here:

- `s1` is the object.
- `.` is the dot operator.
- `roll` and `name` are public data members.

---

## Structure

```text
student (Class)
│
├── roll     → Data member
├── name     → Data member
│
└── Objects
    ├── s1
    └── s2
```

---

## Programs Practiced

```text
01_basic_class.cpp
02_create_objects.cpp
03_access_members.cpp
```

---

## Important Points

- A class is a user-defined data type.
- An object is an instance of a class.
- A class can contain data members and member functions.
- One class can create multiple objects.
- Variables declared inside a class are called data members.
- `public` allows members to be accessed outside the class.
- The dot operator `.` is used to access public data members through an object.
- A class definition ends with a semicolon `;`.
