# KEY WORDS

### **# CONST**

`const` keyword indicates that the function promises not to modify the value of that parameter. It provides a guarantee to the caller of the function that the argument passed is read-only and so will not be modified. 

`this` keyword is a pointer to the current object. When you dereference it with `*this`, you get the current object itself, which you can use to make a copy of the entire object. When you use `this->_v`, you're accessing the `_v` member of the current object.

<br>

# Operator Overloading

- Function using the keyword operator followed by the operator to overload. 
The function can be a member function of your class or a standalone function (for some operators).

- **Syntax for Member Function:**  
If the operator function is a member function, it takes one less argument than the operator usually requires. This is because the "current" object (the object on which the function is called) is used as the first operand. For example, to overload the > operator for a Fixed class, you would write:

```cpp
    bool operator>(const Fixed &other) const {return _member > other._member}
```

- **Syntax for Standalone Function:**
If the operator function is a standalone function, it takes as many arguments as the operator usually requires. Both operands are passed as arguments. For example, to overload the > operator for a Fixed class, you would write:

```cpp
    bool operator>(const Fixed &a, const Fixed &b) { return a._member > b._member } 
```

- Overloaded operators are used the same way as the built-in operators. For example, the > operator for a `MyClass` class, you can use it like this:

```cpp
MyClass a(10);
MyClass b(20);
if (a > b) { /* do something */ }
```
*In this code, a > b calls a.operator>(b). Inside the operator> function, this->_v refers to a._v, and other._v refers to b._v.*
*a > b, is equivalent to calling a.operator>(b).*

- **Why choose operator**
*Encapsulation*: In object-oriented programming, it's a good practice to keep the data (member variables) of an object private, and provide public methods to interact with that data. This is known as encapsulation. If _v is a private member variable, you can't access it directly from outside the class. By providing an overloaded > operator, you allow other code to compare Fixed objects without needing to know the details of how the Fixed class is implemented.

*Ease of Use*: Using operators can make your code easier to read and write. Instead of calling a method like a.isGreaterThan(b), you can simply write a > b.

*Consistency with Built-in Types*: Overloading operators allows user-defined types to behave more like built-in types. This can make your code more intuitive and consistent.

- **Increment/decrement operator**

```cpp
class Fixed {
    // ...
public:
    // Prefix increment
    Fixed& operator++() {
        ++_v;
        return *this;
    }

    // Postfix increment
    Fixed operator++(int) {
        Fixed temp(*this); // make a copy for result
        ++_v;             // increment this instance
        return temp;      // return the copy (the old value)
    }
};
```
```cpp
Fixed a(10);
Fixed b = ++a;  // Calls a.operator++(), a and b are now 11
Fixed c = a++;  // Calls a.operator++(0), a is now 12, but c is 11 (the old value)
```

*The prefix increment* (++x) increases _v and then returns the current object. It's implemented as a member function that takes no arguments and returns a reference to the current object.
*The postfix increment* (x++) increases _v but returns the old value of the current object. It's implemented as a member function that takes an int argument (which is ignored) and returns a new Fixed object.

<br>

# REFERENCING
The ampersand `&` in the return type `std::ostream&` indicates that the function returns a reference to a `std::ostream`
It means that when you call `init()` and use the returned reference, you can continue chaining output operations `<<` on that `std::ostream` object.

