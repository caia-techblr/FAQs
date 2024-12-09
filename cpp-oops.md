# C++ FAQs

## Language Basics (Non OO Concepts)
* What are reference variables
* Purpose of new, delete keywords
* What are memory leaks, give an example
* How do you detect memory leaks
* Function overloading concept
* Default arguments

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
* What is the purpose of **this** keyword
* What is the significance of **const** member functions (const suffix to functions)
* What is a **constructor**
* Explain a) default constructor b) parameterized constructor c) copy constructor
* Do copy constructor is must for every class in C++
* Member wise initializer with constructors
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
> Please refer stack example
  
## Inheritance

## Virtual Functions

## Operator Overloading

## Templates
