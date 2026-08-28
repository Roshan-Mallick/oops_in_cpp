# Object-Oriented Programming in C++

This repository contains my journey of learning **Object-Oriented Programming (OOP) in C++** step by step.

I am learning each concept by writing C++ programs, practicing examples, and maintaining notes for every topic.

---

# Current Progress

* [x] **01 — Classes and Objects**
* [x] **02 — Member Functions**
* [ ] **03 — Inline Functions**
* [ ] **04 — Encapsulation**
* [ ] **05 — Abstraction**
* [ ] **06 — Friend Functions and Friend Classes**
* [ ] **07 — Constructors**
* [ ] **08 — Destructors**
* [ ] **09 — Access Specifiers**
* [ ] **10 — Inheritance**
* [ ] **11 — Polymorphism**
* [ ] **12 — This Pointer**
* [ ] **13 — Static Members**
* [ ] **14 — Assignment Operator**
* [ ] **15 — Operator Overloading**
* [ ] **16 — Virtual Functions**
* [ ] **17 — Pure Virtual Functions**
* [ ] **18 — Abstract Classes**
* [ ] **19 — Object Pointers**
* [ ] **20 — Dynamic Memory and Objects**
* [ ] **21 — Composition**
* [ ] **22 — Aggregation**
* [ ] **23 — Association**
* [ ] **24 — Dependency**
* [ ] **25 — Object-Oriented Mini Projects**
* [ ] **26 — Function Overloading**
* [ ] **27 — Const Correctness**
* [ ] **28 — Exception Handling**
* [ ] **29 — Templates**
* [ ] **30 — Type Casting**
* [ ] **31 — Namespaces**
* [ ] **32 — File Handling**
* [ ] **33 — Copy and Move Semantics**
* [ ] **34 — Rule of Three, Five and Zero**
* [ ] **35 — RAII**
* [ ] **36 — Smart Pointers**
* [ ] **37 — STL**

> **Note:** The official learning progress is currently completed up to Section 02 — Member Functions. The remaining sections are part of the planned C++ and OOP learning journey.

---

# Repository Structure

```text
oops_in_cpp/
│
├── 01_classes_and_objects/
│   ├── 01_basic_class.cpp
│   ├── 02_create_objects.cpp
│   ├── 03_access_members.cpp
│   └── Notes_Classes_Objects.md
│
├── 02_member_functions/
│   ├── 01_function_inside_class.cpp
│   ├── 02_function_outside_class.cpp
│   ├── 03_call_member_function.cpp
│   └── Notes_Member_Functions.md
│
├── 03_inline_functions/
│   ├── 01_basic_inline_function.cpp
│   ├── 02_inline_function_inside_class.cpp
│   ├── 03_inline_function_outside_class.cpp
│   └── Notes_Inline_Functions.md
│
├── 04_encapsulation/
│   ├── 01_private_members.cpp
│   ├── 02_getters_setters.cpp
│   ├── 03_data_hiding.cpp
│   └── Notes_Encapsulation.md
│
├── 05_abstraction/
│   ├── 01_basic_abstraction.cpp
│   ├── 02_hide_implementation.cpp
│   └── Notes_Abstraction.md
│
├── 06_friend_functions_and_classes/
│   ├── 01_basic_friend_function.cpp
│   ├── 02_friend_function_access_private_members.cpp
│   ├── 03_friend_function_multiple_classes.cpp
│   ├── 04_basic_friend_class.cpp
│   ├── 05_friend_class_access_private_members.cpp
│   └── Notes_Friend_Functions_and_Classes.md
│
├── 07_constructors/
│   ├── 01_compiler_provided_default_constructor.cpp
│   ├── 02_user_defined_default_constructor.cpp
│   ├── 03_default_parameter_constructor.cpp
│   ├── 04_parameterized_constructor.cpp
│   ├── 05_copy_constructor.cpp
│   └── Notes_Constructors.md
│
├── 08_destructors/
│   ├── 01_basic_destructor.cpp
│   ├── 02_destructor_execution.cpp
│   └── Notes_Destructors.md
│
├── 09_access_specifiers/
│   ├── 01_public.cpp
│   ├── 02_private.cpp
│   ├── 03_protected.cpp
│   └── Notes_Access_Specifiers.md
│
├── 10_inheritance/
│   ├── 01_single_inheritance.cpp
│   ├── 02_multilevel_inheritance.cpp
│   ├── 03_multiple_inheritance.cpp
│   ├── 04_hierarchical_inheritance.cpp
│   ├── 05_hybrid_inheritance.cpp
│   └── Notes_Inheritance.md
│
├── 11_polymorphism/
│   ├── 01_function_overloading.cpp
│   ├── 02_function_overriding.cpp
│   ├── 03_compile_time_polymorphism.cpp
│   ├── 04_runtime_polymorphism.cpp
│   └── Notes_Polymorphism.md
│
├── 12_this_pointer/
│   ├── 01_basic_this_pointer.cpp
│   ├── 02_this_pointer_with_data_members.cpp
│   └── Notes_This_Pointer.md
│
├── 13_static_members/
│   ├── 01_static_data_member.cpp
│   ├── 02_static_member_function.cpp
│   └── Notes_Static_Members.md
│
├── 14_assignment_operator/
│   ├── 01_default_assignment.cpp
│   ├── 02_assignment_operator_overloading.cpp
│   └── Notes_Assignment_Operator.md
│
├── 15_operator_overloading/
│   ├── 01_plus_operator.cpp
│   ├── 02_minus_operator.cpp
│   ├── 03_comparison_operator.cpp
│   └── Notes_Operator_Overloading.md
│
├── 16_virtual_functions/
│   ├── 01_basic_virtual_function.cpp
│   ├── 02_runtime_polymorphism.cpp
│   └── Notes_Virtual_Functions.md
│
├── 17_pure_virtual_functions/
│   ├── 01_basic_pure_virtual_function.cpp
│   └── Notes_Pure_Virtual_Functions.md
│
├── 18_abstract_classes/
│   ├── 01_basic_abstract_class.cpp
│   ├── 02_abstract_class_example.cpp
│   └── Notes_Abstract_Classes.md
│
├── 19_object_pointers/
│   ├── 01_pointer_to_object.cpp
│   ├── 02_arrow_operator.cpp
│   └── Notes_Object_Pointers.md
│
├── 20_dynamic_memory_and_objects/
│   ├── 01_dynamic_object.cpp
│   ├── 02_new_delete_with_objects.cpp
│   └── Notes_Dynamic_Memory_Objects.md
│
├── 21_composition/
│   ├── 01_basic_composition.cpp
│   └── Notes_Composition.md
│
├── 22_aggregation/
│   ├── 01_basic_aggregation.cpp
│   └── Notes_Aggregation.md
│
├── 23_association/
│   ├── 01_basic_association.cpp
│   └── Notes_Association.md
│
├── 24_dependency/
│   ├── 01_basic_dependency.cpp
│   └── Notes_Dependency.md
│
├── 25_oop_mini_projects/
│   ├── 01_student_management_system.cpp
│   ├── 02_bank_management_system.cpp
│   └── 03_library_management_system.cpp
│
├── 26_function_overloading/
│   ├── 01_basic_function_overloading.cpp
│   ├── 02_parameter_based_overloading.cpp
│   └── Notes_Function_Overloading.md
│
├── 27_const_correctness/
│   ├── 01_const_variables.cpp
│   ├── 02_const_member_function.cpp
│   ├── 03_const_objects.cpp
│   └── Notes_Const_Correctness.md
│
├── 28_exception_handling/
│   ├── 01_try_catch.cpp
│   ├── 02_throw_exception.cpp
│   ├── 03_multiple_catch.cpp
│   └── Notes_Exception_Handling.md
│
├── 29_templates/
│   ├── 01_function_template.cpp
│   ├── 02_class_template.cpp
│   └── Notes_Templates.md
│
├── 30_type_casting/
│   ├── 01_implicit_conversion.cpp
│   ├── 02_static_cast.cpp
│   ├── 03_dynamic_cast.cpp
│   ├── 04_const_cast.cpp
│   ├── 05_reinterpret_cast.cpp
│   └── Notes_Type_Casting.md
│
├── 31_namespaces/
│   ├── 01_basic_namespace.cpp
│   ├── 02_namespace_scope.cpp
│   └── Notes_Namespaces.md
│
├── 32_file_handling/
│   ├── 01_write_to_file.cpp
│   ├── 02_read_from_file.cpp
│   ├── 03_append_to_file.cpp
│   └── Notes_File_Handling.md
│
├── 33_copy_and_move_semantics/
│   ├── 01_copy_semantics.cpp
│   ├── 02_move_constructor.cpp
│   ├── 03_move_assignment.cpp
│   └── Notes_Copy_and_Move_Semantics.md
│
├── 34_rule_of_three_five_zero/
│   ├── 01_rule_of_three.cpp
│   ├── 02_rule_of_five.cpp
│   ├── 03_rule_of_zero.cpp
│   └── Notes_Rule_of_Three_Five_Zero.md
│
├── 35_raii/
│   ├── 01_basic_raii.cpp
│   ├── 02_resource_management.cpp
│   └── Notes_RAII.md
│
├── 36_smart_pointers/
│   ├── 01_unique_ptr.cpp
│   ├── 02_shared_ptr.cpp
│   ├── 03_weak_ptr.cpp
│   └── Notes_Smart_Pointers.md
│
├── 37_stl/
│   ├── 01_containers/
│   ├── 02_iterators/
│   ├── 03_algorithms/
│   ├── 04_functors/
│   ├── 05_lambda_functions/
│   └── Notes_STL.md
│
└── README.md
```

---

# Progress Summary

| Section | Topic                               | Status        |
| ------- | ----------------------------------- | ------------- |
| 01      | Classes and Objects                 | **Completed** |
| 02      | Member Functions                    | **Completed** |
| 03      | Inline Functions                    | Pending       |
| 04      | Encapsulation                       | Pending       |
| 05      | Abstraction                         | Pending       |
| 06      | Friend Functions and Friend Classes | Pending       |
| 07      | Constructors                        | Pending       |
| 08      | Destructors                         | Pending       |
| 09      | Access Specifiers                   | Pending       |
| 10      | Inheritance                         | Pending       |
| 11      | Polymorphism                        | Pending       |
| 12      | This Pointer                        | Pending       |
| 13      | Static Members                      | Pending       |
| 14      | Assignment Operator                 | Pending       |
| 15      | Operator Overloading                | Pending       |
| 16      | Virtual Functions                   | Pending       |
| 17      | Pure Virtual Functions              | Pending       |
| 18      | Abstract Classes                    | Pending       |
| 19      | Object Pointers                     | Pending       |
| 20      | Dynamic Memory and Objects          | Pending       |
| 21      | Composition                         | Pending       |
| 22      | Aggregation                         | Pending       |
| 23      | Association                         | Pending       |
| 24      | Dependency                          | Pending       |
| 25      | Object-Oriented Mini Projects       | Pending       |
| 26      | Function Overloading                | Pending       |
| 27      | Const Correctness                   | Pending       |
| 28      | Exception Handling                  | Pending       |
| 29      | Templates                           | Pending       |
| 30      | Type Casting                        | Pending       |
| 31      | Namespaces                          | Pending       |
| 32      | File Handling                       | Pending       |
| 33      | Copy and Move Semantics             | Pending       |
| 34      | Rule of Three, Five and Zero        | Pending       |
| 35      | RAII                                | Pending       |
| 36      | Smart Pointers                      | Pending       |
| 37      | STL                                 | Pending       |

## Current Progress

**Completed: 2 / 37**

**Progress: 5.4%**

**Current completed topic:** `02 — Member Functions`

**Next topic:** `03 — Inline Functions`

---

# Topics Completed

## 01 — Classes and Objects

Covered:

* What is a class
* Basic class syntax
* Class name
* Data members
* `public` access specifier
* Creating objects
* Creating multiple objects
* Accessing data members
* Using the dot `.` operator

Programs completed:

```text
01_basic_class.cpp
02_create_objects.cpp
03_access_members.cpp
```

Notes:

```text
Notes_Classes_Objects.md
```

---

## 02 — Member Functions

Covered:

* Defining a member function inside a class
* Declaring a member function inside and defining it outside the class
* Scope resolution operator `::`
* Calling member functions using an object
* Calling multiple member functions

Programs completed:

```text
01_function_inside_class.cpp
02_function_outside_class.cpp
03_call_member_function.cpp
```

Notes:

```text
Notes_Member_Functions.md
```

---

# Learning Progress

```text
01 Classes and Objects              ████████████████████ 100%
02 Member Functions                 ████████████████████ 100%
03 Inline Functions                 ░░░░░░░░░░░░░░░░░░░░   0%
04 Encapsulation                    ░░░░░░░░░░░░░░░░░░░░   0%
05 Abstraction                      ░░░░░░░░░░░░░░░░░░░░   0%
06 Friend Functions and Classes     ░░░░░░░░░░░░░░░░░░░░   0%
07 Constructors                     ░░░░░░░░░░░░░░░░░░░░   0%
08 Destructors                      ░░░░░░░░░░░░░░░░░░░░   0%
09 Access Specifiers                ░░░░░░░░░░░░░░░░░░░░   0%
10 Inheritance                      ░░░░░░░░░░░░░░░░░░░░   0%
11 Polymorphism                     ░░░░░░░░░░░░░░░░░░░░   0%
12 This Pointer                     ░░░░░░░░░░░░░░░░░░░░   0%
13 Static Members                   ░░░░░░░░░░░░░░░░░░░░   0%
14 Assignment Operator              ░░░░░░░░░░░░░░░░░░░░   0%
15 Operator Overloading             ░░░░░░░░░░░░░░░░░░░░   0%
16 Virtual Functions                ░░░░░░░░░░░░░░░░░░░░   0%
17 Pure Virtual Functions           ░░░░░░░░░░░░░░░░░░░░   0%
18 Abstract Classes                 ░░░░░░░░░░░░░░░░░░░░   0%
19 Object Pointers                  ░░░░░░░░░░░░░░░░░░░░   0%
20 Dynamic Memory and Objects       ░░░░░░░░░░░░░░░░░░░░   0%
21 Composition                      ░░░░░░░░░░░░░░░░░░░░   0%
22 Aggregation                      ░░░░░░░░░░░░░░░░░░░░   0%
23 Association                      ░░░░░░░░░░░░░░░░░░░░   0%
24 Dependency                       ░░░░░░░░░░░░░░░░░░░░   0%
25 OOP Mini Projects                ░░░░░░░░░░░░░░░░░░░░   0%
26 Function Overloading             ░░░░░░░░░░░░░░░░░░░░   0%
27 Const Correctness                ░░░░░░░░░░░░░░░░░░░░   0%
28 Exception Handling               ░░░░░░░░░░░░░░░░░░░░   0%
29 Templates                        ░░░░░░░░░░░░░░░░░░░░   0%
30 Type Casting                     ░░░░░░░░░░░░░░░░░░░░   0%
31 Namespaces                       ░░░░░░░░░░░░░░░░░░░░   0%
32 File Handling                    ░░░░░░░░░░░░░░░░░░░░   0%
33 Copy and Move Semantics          ░░░░░░░░░░░░░░░░░░░░   0%
34 Rule of Three, Five and Zero     ░░░░░░░░░░░░░░░░░░░░   0%
35 RAII                             ░░░░░░░░░░░░░░░░░░░░   0%
36 Smart Pointers                   ░░░░░░░░░░░░░░░░░░░░   0%
37 STL                              ░░░░░░░░░░░░░░░░░░░░   0%
```

**Overall: 2 / 37 sections completed — 5.4%**

---

# What's Next?

## 03 — Inline Functions

The next stage is to learn inline functions, including:

* What an inline function is
* Basic inline function syntax
* Inline member functions
* Defining an inline function inside a class
* Defining an inline function outside a class

```text
Completed
   ↓
01 — Classes and Objects ✓
   ↓
02 — Member Functions ✓
   ↓
Current Next
   ↓
03 — Inline Functions
   ↓
04 — Encapsulation
```

---

# Core OOP Concepts

The four main OOP principles are:

```text
Encapsulation
Inheritance
Polymorphism
Abstraction
```

This repository also covers supporting and advanced C++ concepts, including:

* Classes and Objects
* Member Functions
* Inline Functions
* Friend Functions and Friend Classes
* Constructors
* Destructors
* Access Specifiers
* `this` Pointer
* Static Members
* Assignment Operators
* Operator Overloading
* Virtual Functions
* Pure Virtual Functions
* Abstract Classes
* Object Pointers
* Dynamic Memory and Objects
* Composition
* Aggregation
* Association
* Dependency

The repository later extends into:

* Function Overloading
* Const Correctness
* Exception Handling
* Templates
* Type Casting
* Namespaces
* File Handling
* Copy and Move Semantics
* Rule of Three, Five and Zero
* RAII
* Smart Pointers
* STL

---

# Repository Goal

The goal of this repository is to maintain a structured record of my **C++ Object-Oriented Programming and advanced C++ learning journey**.

The repository includes:

* OOP fundamentals
* Core OOP concepts
* Advanced OOP concepts
* C++ practice programs
* Modern C++ concepts
* STL
* Personal notes
* Step-by-step learning progress
* Object-oriented mini projects

Each topic contains focused C++ programs and a dedicated notes file as I progress.

---

# Progress Tracker

| Completed | Total | Progress |
| --------: | ----: | -------: |
|         2 |    37 | **5.4%** |

**Current focus:** `03 — Inline Functions`

