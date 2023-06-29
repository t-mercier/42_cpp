### Key words

The `const` keyword at the end of the function declaration means that this function does not modify the object it's called on. 
`operator>` is a member function that takes another Fixed object and returns a bool. This function is called whenever we use the > operator on a Fixed object. It compares the _v member variable of the current object with the _v member variable of the n object.

`this` keyword is a pointer to the current object. When you dereference it with `*this`, you get the current object itself, which you can use to make a copy of the entire object. When you use `this->_v`, you're accessing the `_v` member of the current object.

### Operator Overloading
- **What is Operator Overloading?**  
Operator overloading allows you to redefine the way operators work for user-defined types (like classes). This means you can provide your own function for an operator, and that function will be called whenever you use that operator on your user-defined type.

- **How to Overload an Operator?**  
To overload an operator, you write a function with the keyword operator followed by the operator you want to overload. This function can be a member function of your class or a standalone function (for some operators).

- **Syntax for Member Function:**  
If the operator function is a member function, it takes one less argument than the operator usually requires. This is because the "current" object (the object on which the function is called) is used as the first operand. For example, to overload the > operator for a Fixed class, you would write:

```cpp
class Fixed {
    // ...
    bool operator>(const Fixed &other) const {
        // Your comparison logic here...
    }
};
```

- **Syntax for Standalone Function:**
If the operator function is a standalone function, it takes as many arguments as the operator usually requires. Both operands are passed as arguments. For example, to overload the > operator for a Fixed class, you would write:

```cpp
bool operator>(const Fixed &a, const Fixed &b) {
    // Your comparison logic here...
}
```
- **Using Overloaded Operators:**
You use overloaded operators just like you would use the built-in operators. For example, if you've overloaded the > operator for a Fixed class, you can use it like this:

```cpp
Fixed a(10);
Fixed b(20);
if (a > b) {
    // Do something...
}
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
