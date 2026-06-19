# POLYMORPHISM IN C++

## Definition

Polymorphism means **"Many Forms"**.

* Poly = Many
* Morphism = Forms

Polymorphism allows a single function, operator, or interface to behave differently depending on the situation.

Example:

```cpp
show();
```

The same function name can perform different tasks.

---

# TYPES OF POLYMORPHISM

Polymorphism is mainly of two types:

## 1. Compile-Time Polymorphism

Also known as:

* Static Polymorphism
* Early Binding
* Static Binding

The function call is resolved by the compiler during compilation.

### Characteristics

* Faster execution
* Memory efficient
* No virtual keyword required
* Resolved at compile time
* Achieved through:

  * Function Overloading
  * Operator Overloading

---

## A. Function Overloading

Same function name with different parameter lists.

### Ways to Perform Function Overloading

#### 1. Number of Arguments

```cpp
void show();
void show(int);
void show(int,int);
```

#### 2. Type of Arguments

```cpp
void show(int);
void show(float);
```

#### 3. Order of Arguments

```cpp
void show(int,float);
void show(float,int);
```

### Characteristics

* Same function name
* Different parameter list
* Compile-time decision
* Static Binding

---

## B. Operator Overloading

Redefining the behavior of operators for user-defined classes.

Example:

```cpp
obj1 + obj2;
```

### Characteristics

* Provides custom behavior to operators
* Works with classes and objects
* Compile-time polymorphism

---

# 2. Run-Time Polymorphism

Also known as:

* Dynamic Polymorphism
* Late Binding
* Dynamic Binding

The function call is resolved during program execution.

### Characteristics

* Uses virtual functions
* Requires inheritance
* Uses base class pointer/reference
* Resolved at runtime
* More flexible
* Slightly slower than compile-time polymorphism

---

## Function Overriding

A derived class redefines a virtual function of the base class.

### Example

```cpp
class A
{
public:
    virtual void show()
    {
        cout<<"A show";
    }
};

class B : public A
{
public:
    void show()
    {
        cout<<"B show";
    }
};
```

### Characteristics

* Same function name
* Same parameter list
* Inheritance required
* Virtual keyword required
* Runtime decision

---

# BINDING

Binding means linking a function call to its definition.

---

## Early Binding

Also called:

* Compile-Time Binding
* Static Binding

Examples:

```cpp
Function Overloading
Operator Overloading
Normal Function Calls
```

### Characteristics

* Fast
* Compiler resolves function

---

## Late Binding

Also called:

* Dynamic Binding
* Runtime Binding

Examples:

```cpp
Virtual Functions
Function Overriding
```

### Characteristics

* Runtime decision
* Uses virtual keyword

---

# FUNCTION OVERLOADING VS FUNCTION OVERRIDING

| Feature              | Overloading  | Overriding |
| -------------------- | ------------ | ---------- |
| Polymorphism Type    | Compile Time | Run Time   |
| Inheritance Required | No           | Yes        |
| Virtual Required     | No           | Yes        |
| Function Name        | Same         | Same       |
| Parameters           | Different    | Same       |
| Binding              | Static       | Dynamic    |

---

# METHOD HIDING

Method hiding occurs when a derived class defines a function having the same name as a function in the base class.

### Example

```cpp
class A
{
public:
    void show()
    {
        cout<<"A show";
    }
};

class B : public A
{
public:
    void show()
    {
        cout<<"B show";
    }
};
```

### Characteristics

* Same function name
* Base class function becomes hidden
* Virtual keyword not used
* Compile-time binding
* Not runtime polymorphism

### Note

```cpp
// Without virtual keyword, this is Method Hiding.
// With virtual keyword, this becomes Method Overriding.
```

---

# VIRTUAL FUNCTION

A virtual function is a member function declared with the virtual keyword in the base class.

### Syntax

```cpp
virtual void show();
```

### Characteristics

* Enables runtime polymorphism
* Supports overriding
* Uses base class pointer/reference
* Dynamic binding

---

# PURE VIRTUAL FUNCTION

A virtual function with no implementation.

### Syntax

```cpp
virtual void show() = 0;
```

### Characteristics

* Makes the class abstract
* Object cannot be created
* Must be overridden by derived classes

---

# ABSTRACT CLASS

A class containing at least one pure virtual function.

### Example

```cpp
class A
{
public:
    virtual void show() = 0;
};
```

### Characteristics

* Cannot create objects
* Used to achieve abstraction
* Provides a common interface

---

# VISIBILITY MODES OF INHERITANCE

## Public Inheritance

```cpp
class B : public A
```

| Base Class | Derived Class  |
| ---------- | -------------- |
| Public     | Public         |
| Protected  | Protected      |
| Private    | Not Accessible |

---

## Protected Inheritance

```cpp
class B : protected A
```

| Base Class | Derived Class  |
| ---------- | -------------- |
| Public     | Protected      |
| Protected  | Protected      |
| Private    | Not Accessible |

---

## Private Inheritance

```cpp
class B : private A
```

| Base Class | Derived Class  |
| ---------- | -------------- |
| Public     | Private        |
| Protected  | Private        |
| Private    | Not Accessible |

---

# INTERVIEW ONE-LINERS

```cpp
// Polymorphism means one interface, many forms.

// Function Overloading = Compile-Time Polymorphism.

// Operator Overloading = Compile-Time Polymorphism.

// Function Overriding = Run-Time Polymorphism.

// Virtual Function enables Dynamic Binding.

// Binding means linking a function call to its definition.

// Early Binding = Compile-Time Binding.

// Late Binding = Run-Time Binding.

// Without virtual keyword, same-name function in derived class causes Method Hiding.

// With virtual keyword, same-name function in derived class performs Method Overriding.

// Pure Virtual Function makes a class Abstract.

// Abstract Class cannot be instantiated.
```
