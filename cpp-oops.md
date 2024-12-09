## Language Basics (Non OO Concepts)
* Usage of cout, cin, endl
* What are reference variables
* Explain l-value and r-value (location value, read value) with example expressions
* Explain the purpose of new, delete keywords, with brief syntax
* What are memory leaks, give an example code causing memory leaks
* How do you detect memory leaks
* Parameter passing - Pass by value, Pass by address, Pass by reference# C++ FAQs
* Can you return address of a local variables
* Function overloading concept, Rules for binding overloaded functions
* Default arguments for a function
* What are inline functions?

## OO Basics (Common between C++ & Java)
* What are Object Oriented Principles?
* What is Data Abstraction (Encapsulation + Data Hiding)?
* What is Polymorphism?
* Give one real example for true polymorphism (e.g. Shape, Circle, Triangle -- area, circumference methods)
* Give examples for a) is-a b) has-a c) part-of relationships
* What is a class
* What is an object
* What is Overloading
* Explain the access specifiers - public, private, protected

## Classes and Objects
* Compute size of an object.
* What is the purpose of **this** keyword
* What is the significance of **const** member functions (const suffix to functions)
* What is a **constructor**
* Explain a) default constructor b) parameterized constructor c) copy constructor
* Do copy constructor is must for every class in C++
* Member wise initializer for constructors , e.g. 
```
Point(int x,int y):m_x(x), m_y(y) { }
```
* What is **destructor**?
* What are static data members of the class
* Explain the purpose of static member functions of the class
* What are friend functions

> Please note that destructor doesn't destroy the object. Object's own memory
> will be released at end of scope even if destructor is not implemented
> Real purpose of destructor is to release any external resources like dynamic memory
> Please refer [MyStack](cpp-examples/mystack-demo.cxx) example

> Similarly constructor doesn't allocate memory for the object, it's role is to initialize data members (initial object state) 
  
## Inheritance
* What is inheritance
* Types of inheritance a) single b) multi level c) multiple
* Constructor synyax for derived classes in single/multi level, multiple
* Order of execution of cosntructors and destructors in inherited classes
* What is protected access specifiers
  
## Virtual Functions
* What is overriding
* Method binding/lookup while invoking overridden functions
* Upcasting vs Downcasting with an example
* Explain dynamic binding / runtime polymorphism with an example (using virtual functions)
* What are pure virtual functions
* Abstract class in C++ (Class with one or more pure virtual functions)
* Virtual Inheritance / Virtual Base Class

## Operator Overloading
* Explain operator overloading with an example
* Which operators can't be overloaded at all
* Which operator can't be overloaded as friend function
  
> Overloading +, -, ++, --, =, ==, <, >, <<, >> etc.

## Templates
* Function overloading with an example
* Class overloading with an example


## Bit Advanced
* Name mangling of C++ functions
* extern "C" block
* Rule of three/zero
* explicit constructor
* virtual destructor
* RTTI Features - dynamic_cast, static_cast, typeinfo
* const_cast, reinterpret_cast
* Non Type Template Parameters (NTTP)
