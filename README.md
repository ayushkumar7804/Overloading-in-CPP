# ➕ Function and Operator Overloading in C++

---

## 🎯 Aim  
To study and implement **Function Overloading** and **Operator Overloading** in C++.

---

## 📚 Theory  

In C++, **overloading** is a fundamental feature of **polymorphism** that allows the same function or operator to perform different tasks depending on the context. This makes programs more **intuitive, flexible, and closer to natural language**.

---

### 🔹 Function Overloading  

Function overloading allows multiple functions with the **same name** but **different parameter lists**. The compiler decides which version to call at **compile time** based on the number and types of arguments.  

**Key Characteristics:**
- Functions must differ in the number or type of parameters.  
- Return type alone cannot distinguish overloaded functions.  
- Represents **compile‑time polymorphism (static binding)**.  
- Improves readability by grouping logically similar operations under one name.  

**Advantages:**
- Simplifies code by avoiding multiple function names for similar tasks.  
- Makes programs easier to understand and maintain.  
- Provides flexibility in handling different data types and argument counts.  

---

### 🔹 Operator Overloading  

Operator overloading allows redefining the behavior of operators (`+`, `-`, `*`, etc.) for **user‑defined types** (classes). This enables objects to behave like built‑in types, allowing natural expressions such as `c1 + c2` for complex numbers.  

**Key Characteristics:**
- Declared using the keyword `operator`.  
- Can be implemented as a member function or friend function.  
- Some operators (`::`, `.`, `.*`, `?:`) cannot be overloaded.  
- Enhances readability and abstraction by allowing intuitive operations on objects.  

**Advantages:**
- Makes user‑defined types more expressive.  
- Allows natural mathematical and logical operations on objects.  
- Improves code clarity and reduces verbosity.  

---

## 📋 Algorithms  

### 🧾 Function Overloading (Addition Class)

1. **Start**  
2. Define a class `Addition`.  
3. Inside the class, define three overloaded methods:  
   - `sum(int a, int b)` → returns sum of two integers.  
   - `sum(int a, int b, int c)` → returns sum of three integers.  
   - `sum(double d, double e)` → returns sum of two doubles.  
4. In `main()`:  
   - Create an object `obj`.  
   - Call `obj.sum(10,20)` → invokes 2‑int version.  
   - Call `obj.sum(10,20,20)` → invokes 3‑int version.  
   - Call `obj.sum(10.8,20.34)` → invokes 2‑double version.  
   - Display results.  
5. **End**

---

### 🧾 Function Overloading (UserInfo Class)

1. **Start**  
2. Define a class `UserInfo`.  
3. Overload the method `show()` with different parameter lists:  
   - `show(string name)` → prints only name.  
   - `show(string name, int age)` → prints name and age.  
   - `show(string name, string city)` → prints name and city.  
   - `show(string name, int age, string city)` → prints all three.  
4. In `main()`:  
   - Create an object `u`.  
   - Call each overloaded version with appropriate arguments.  
   - Display results.  
5. **End**

---

### 🧾 Operator Overloading (Complex Numbers)

1. **Start**  
2. Define a class `Complex` with members `real`, `imag`.  
3. Create a constructor to initialize values.  
4. Overload the `+` operator:  
   - Add real parts.  
   - Add imaginary parts.  
   - Return a new `Complex` object.  
5. Define a `display()` method to print the result.  
6. In `main()`:  
   - Create two objects `c1`, `c2`.  
   - Compute `c3 = c1 + c2`.  
   - Display `c3`.  
7. **End**

---

### 🧾 Operator Overloading (Book Class)

1. **Start**  
2. Define a class `Book` with members `title`, `pages`.  
3. Create a constructor to initialize values.  
4. Overload the `-` operator:  
   - Concatenate titles with `" & "`.  
   - Add page counts.  
   - Return a new `Book` object.  
5. Define a `display()` method to print details.  
6. In `main()`:  
   - Create two objects `b1`, `b2`.  
   - Compute `b3 = b1 - b2`.  
   - Display all three books.  
7. **End**

---

## 🧠 Conclusion  

This experiment demonstrates the versatility of **overloading** in C++:  

- **Function Overloading** → Same function name, different parameter lists, enabling flexible and intuitive use of functions.  
- **Operator Overloading** → Redefines operators for user‑defined types, making objects behave like built‑in types.  
- Both are examples of **compile‑time polymorphism**, resolved by the compiler before execution.  
- Overloading improves **readability, reusability, and abstraction**, making programs more expressive and easier to maintain.v
