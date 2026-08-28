# Encapsulation in C++

## 1. What is Encapsulation?

Encapsulation is the process of combining data members and member functions inside a single class while controlling how the data can be accessed or modified.

A common approach is:
- Keep data members `private`
- Use `public` member functions to access or modify them

## 2. Why Use Encapsulation?

Encapsulation helps:
- Protect data from unwanted direct access
- Control how data is modified
- Validate input before changing data
- Keep related data and functions together
- Make code easier to maintain

## 3. Private Members

In C++, class members are `private` by default if no access specifier is declared.

```cpp
class employee {
    int id = 117;
};
```

The `id` member cannot be accessed directly from `main()`.

```cpp
class employee {
private:
    string name = "Roshan";
};
```

Private members can only be accessed directly by member functions of the same class.

## 4. Accessing Private Members

A public member function can access private data.

```cpp
class employee {
private:
    int id = 1177;

public:
    void showdata() {
        cout << id << endl;
    }
};
```

```cpp
employee e1;
e1.showdata();
```

`showdata()` is public, so it can be called using the object. It can access `id` because it belongs to the same class.

## 5. Data Hiding

Data hiding means restricting direct access to internal data.

```cpp
class bank {
private:
    int balance = 10000;

public:
    void check_balance() {
        cout << balance << endl;
    }
};
```

The `balance` variable cannot be accessed directly outside the class.

## 6. Controlled Modification of Data

Private data can be changed through public functions.

```cpp
void deposit(int amount) {
    balance += amount;
}

void withdraw(int amount) {
    balance -= amount;
}
```

The user cannot directly modify `balance`. The class controls how it changes.

## 7. Getters and Setters

### Setter

A setter modifies a private data member.

```cpp
void set_age(int a) {
    age = a;
}
```

### Getter

A getter returns or provides access to private data.

```cpp
int get_age() {
    return age;
}
```

## 8. Validation Using a Setter

A setter can validate input before storing it.

```cpp
void set_age(int a) {
    if (a >= 18)
        age = a;
}
```

This helps prevent invalid data from being stored.

## 9. Program Files

### `01_private_members.cpp`
- Private members by default
- Explicit `private` access specifier
- Direct access restriction

### `02_access_private_members.cpp`
- Accessing private members through a public function
- Creating an object
- Calling the function using the dot operator

### `03_data_hiding.cpp`
- Hiding internal data
- Keeping `balance` private
- Using `check_balance()`, `deposit()`, and `withdraw()`
- Controlled modification of data

### `04_setdata_with_validation.cpp`
- Setter function
- User input
- Controlled data modification
- Validation before using data
- Displaying information through a public function

## 10. Real-World Example

A bank account should not allow direct access to its balance:

```cpp
// account.balance = 50000;  // Not allowed
```

Instead:

```cpp
account.deposit(500);
account.withdraw(200);
```

The class can validate every operation before changing the balance.

## 11. Advantages

- Protects data
- Prevents unwanted direct modification
- Allows controlled access
- Supports validation
- Makes code easier to maintain
- Improves code organization

## 12. Disadvantages

- Requires additional member functions
- Can increase code size in small programs
- Too many getters and setters can reduce simplicity

## 13. Key Points

- Encapsulation combines data and functions inside a class.
- Private data cannot be accessed directly outside the class.
- Public member functions provide controlled access.
- Data hiding restricts direct access to internal data.
- Setters modify private data.
- Getters return or provide access to private data.
- Validation can be added before modifying data.

## Section Summary

This section demonstrates how encapsulation protects and controls class data using private members and public member functions.

```text
04_encapsulation/
├── 01_private_members.cpp
├── 02_access_private_members.cpp
├── 03_data_hiding.cpp
├── 04_setdata_with_validation.cpp
└── Notes_Encapsulation.md
```
