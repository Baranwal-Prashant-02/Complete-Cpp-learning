// POLYMORPHISM = One interface, many forms.

// BINDING:
// Binding means linking a function call with its function definition.

// 1. Early Binding (Static Binding / Compile-Time Binding)
// - Decision is made at compile time.
// - Happens with normal functions.
// - Faster execution.

// 2. Late Binding (Dynamic Binding / Run-Time Binding)
// - Decision is made at runtime.
// - Achieved using virtual functions.
// - Supports runtime polymorphism.

// FUNCTION OVERLOADING
// - Same function name, different parameter list.
// - Compile-time polymorphism.

// FUNCTION OVERRIDING
// - Parent and child classes have same function signature.
// - Requires inheritance.
// - Achieves runtime polymorphism when virtual is used.

// WITHOUT virtual:
// - Static binding occurs.
// - Parent pointer calling child object executes parent function.

// WITH virtual:
// - Dynamic binding occurs.
// - Parent pointer calling child object executes child function.

// Parent pointer can point to child object:
Base* ptr = new Derived();

// Child pointer cannot directly point to parent object:
Derived* ptr = new Base(); // Invalid

// OPERATOR OVERLOADING
// Operators that CANNOT be overloaded:
// 1. Scope Resolution Operator (::)
// 2. Member Access Operator (.)
// 3. Sizeof Operator (sizeof)
// 4. Ternary Operator (?:)
// 5. Pointer-to-member Operator (.*)


// Function Hiding (Name Hiding)
// Child class function hides parent class function.
// Can happen unintentionally.

// Function Overriding
// Same function signature in parent and child.
// Intentional.
// Used with virtual functions for runtime polymorphism.


// =====================================================
// QUICK INTERVIEW POINTS
// =====================================================

// Overloading  -> Compile-Time Polymorphism
// Overriding   -> Run-Time Polymorphism

// Overloading:
// Same name + Different Parameters

// Overriding:
// Same name + Same Parameters + Inheritance

// Without virtual -> Method Hiding
// With virtual    -> Method Overriding

// Pure Virtual Function -> Makes Class Abstract
// Abstract Class -> Cannot be Instantiated