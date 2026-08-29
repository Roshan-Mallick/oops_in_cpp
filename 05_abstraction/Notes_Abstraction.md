# Notes — Abstraction in C++

## 1. What is Abstraction?

Abstraction is the process of hiding unnecessary implementation details and exposing only the essential functionality to the user.

In simple words:

> Show what an object does, hide how it does it.

Example: ATM

User
↓
Withdraw Money
↓
ATM internally:
- checks balance
- verifies account
- processes transaction
- updates balance

The user only needs to know how to withdraw money. The internal implementation is hidden.

---

## 2. Why Abstraction is Used

Abstraction helps to:

- Hide complex implementation details
- Expose only necessary operations
- Reduce complexity
- Improve code organization
- Provide controlled access to data
- Make code easier to maintain
- Separate interface from implementation

---

## 3. Abstraction Using Access Specifiers

C++ provides access specifiers that help implement abstraction.

### private

Members declared as private cannot be accessed directly from outside the class.

```cpp
class Employee {

private:
    string password;

};
```

The user cannot directly access:

```cpp
Employee e;
e.password;   // Error
```

This hides the internal data.

### public

Public functions provide the interface through which the user interacts with the object.

```cpp
class Employee {

private:
    string password;

public:
    void login() {
        // implementation
    }
};
```

The user only needs:

```cpp
e.login();
```

They do not need to know how login works internally.

---

## 4. Abstraction Using Member Functions

Member functions can hide internal implementation.

Example:

```cpp
class LoginSystem {

private:
    string password = "1234";

    bool verifyPassword(string input) {
        return input == password;
    }

public:
    void login(string input) {

        if (verifyPassword(input)) {
            cout << "Login successful";
        }
        else {
            cout << "Invalid password";
        }
    }
};
```

The user calls:

```cpp
LoginSystem user;

user.login("1234");
```

The user does not directly interact with `verifyPassword()` because it is private.

Process:

user.login()
      ↓
verifyPassword()
      ↓
compare input with password
      ↓
true / false
      ↓
Login successful / Invalid password

This is abstraction because the verification process is hidden behind the `login()` function.

---

## 5. bool Functions in Abstraction

A function can return a `bool` value when we need to communicate whether an operation succeeded.

Example:

```cpp
bool verifyPassword(string input) {
    return input == password;
}
```

If the passwords match:

```cpp
input == password
```

becomes:

```cpp
true
```

Otherwise:

```cpp
false
```

Then:

```cpp
if (verifyPassword(input))
```

works because `if` can evaluate the returned `true` or `false`.

---

## 6. Real-World Example — User Login System

The `03_real_world_abstraction.cpp` program demonstrates abstraction using a runtime user database.

The class:

```cpp
class database
```

contains private data:

```cpp
private:
    string mail;
    string pass;
```

These details are hidden from `main()`.

The class provides public functions:

```cpp
signup()
login()
display_db()
```

So `main()` interacts with the object through these functions rather than directly accessing:

```cpp
mail
pass
verify_credential()
```

---

## 7. verify_credential() — Hidden Implementation

The function:

```cpp
bool verify_credential(string inputMail, string inputPass) {
    return inputMail == mail && inputPass == pass;
}
```

is private.

Its job is to verify the credentials.

The outside code does not directly call it.

Instead:

```cpp
bool login(string enterMail, string enterPass) {
    return verify_credential(enterMail, enterPass);
}
```

The `login()` function provides a simple interface.

Process:

main()
  ↓
login(email, password)
  ↓
verify_credential()
  ↓
true / false

This demonstrates hiding implementation details behind a public member function.

---

## 8. Runtime User Creation

The program creates users at runtime.

First:

```cpp
int size;
cin >> size;
```

The user specifies the maximum database size.

Then:

```cpp
database user[size];
```

creates the user objects.

The number of actually created users is tracked using:

```cpp
int user_count = 0;
```

When signup happens:

```cpp
user[user_count].signup(email, password);
user_count++;
```

For example:

```text
Signup 1 → user[0] → user1
Signup 2 → user[1] → user2
Signup 3 → user[2] → user3
```

---

## 9. Signup Process

When the user selects:

```text
1
```

the program asks for:

```text
Enter mail:
Enter password:
```

Then:

```cpp
user[user_count].signup(email, password);
```

stores the credentials inside that object.

Example:

```text
user1
 ├── mail = abc@gmail.com
 └── pass = 1234
```

The data remains private inside the object.

---

## 10. Login Process

When the user selects:

```text
2
```

the program receives:

```cpp
string email, password;
```

Then it checks every created user:

```cpp
for (int i = 0; i < user_count; i++) {

    if (user[i].login(email, password)) {
        ...
    }
}
```

Each object's `login()` calls:

```cpp
verify_credential()
```

If a match is found:

```cpp
found = true;
```

and the loop stops:

```cpp
break;
```

---

## 11. Purpose of bool found

The program uses:

```cpp
bool found = false;
```

because initially it does not know whether the entered credentials belong to any user.

During the loop:

```cpp
if (user[i].login(email, password))
```

if a match is found:

```cpp
found = true;
```

After checking:

```cpp
if (!found) {
    cout << "Mail or Password is invalid\n";
}
```

Flow:

found = false
     ↓
search users
     ↓
match?
 ┌───┴───┐
Yes     No
 ↓       ↓
true    false

---

## 12. Database Full Protection

The program checks:

```cpp
if (user_count >= size) {
    cout << "database is full\n";
    break;
}
```

This prevents creating more users than the specified database size.

Example:

```text
Database size = 2

user1 → allowed
user2 → allowed
user3 → database full
```

---

## 13. Displaying User Data

The class contains:

```cpp
void display_db() {

    cout << "Email : " << mail << endl;
    cout << "password : " << pass << endl;

}
```

Because `mail` and `pass` are private, `main()` cannot directly access them.

Instead:

```cpp
user[i].display_db();
```

is used.

This demonstrates controlled access through a member function.

---

## 14. Overall Structure

                    database
                       |
          ┌────────────┴────────────┐
          |                         |
       PRIVATE                    PUBLIC
          |                         |
    mail, pass              signup()
    verify_credential()     login()
                            display_db()
                                  |
                                  ↓
                               main()
                                  |
                    ┌─────────────┼─────────────┐
                    ↓             ↓             ↓
                 Signup         Login       List Users
                    |             |             |
                    ↓             ↓             ↓
                 user1         verify       display
                 user2        credentials     data
                 user3

---

## 15. Encapsulation vs Abstraction

These concepts are closely related but not exactly the same.

### Encapsulation

Focuses on bundling data and methods together and controlling access.

```cpp
class database {

private:
    string mail;
    string pass;

public:
    void signup();
    bool login();
};
```

The data and functions are bundled inside the class.

### Abstraction

Focuses on hiding unnecessary implementation details and exposing only what the user needs.

```cpp
user.login(email, password);
```

The user does not need to know that internally:

```cpp
verify_credential()
```

compares the email and password.

Easy way to remember:

```text
Encapsulation → Protect the data
Abstraction   → Hide the complexity
```

---

## 16. Key Concepts Covered

The abstraction section demonstrates:

- Abstraction concept
- Access specifiers
- `private` data
- `public` interface
- Private member functions
- Member functions
- Boolean return values
- Hidden credential verification
- Runtime object creation
- User signup
- User login
- User searching
- Controlled data access
- Database size limitation
- Real-world login-system abstraction

---

## One-line Definition for Exams

> Abstraction in C++ is the process of hiding implementation details and exposing only the essential functionality to the user.
