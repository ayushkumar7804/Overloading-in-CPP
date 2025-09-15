
# 🧬 Experiment: Inheritance in C++


## 🎯 Objective
To understand and implement various types of inheritance in C++, demonstrating how derived classes can inherit properties and behaviors from base classes to promote code reuse and modular design.

---

## 📚 Types of Inheritance Covered

| Type                  | Description |
|-----------------------|-------------|
| Single Inheritance    | One derived class inherits from one base class |
| Multiple Inheritance  | One derived class inherits from multiple base classes |
| Multilevel Inheritance| A class inherits from a derived class, forming a chain |
| Hierarchical Inheritance | Multiple derived classes inherit from a single base class |

---

## 📌 1. Single Inheritance

### 🧠 Concept
A derived class inherits from a single base class, gaining access to its public and protected members.

### 📋 Algorithm
- Define a base class with a member variable and a function.
- Create a derived class that inherits from the base class.
- Instantiate the derived class and access inherited members.

### 🧪 Expected Output
- Displays a message from the base class function.
- Prints combined attributes from both base and derived classes.

---

## 📌 2. Multiple Inheritance

### 🧠 Concept
A derived class inherits from more than one base class, combining functionalities from all parent classes.

### 📋 Algorithm
- Define two separate base classes with distinct functions.
- Create a derived class that inherits from both.
- Instantiate the derived class and invoke functions from each base class.

### 🧪 Expected Output
- Executes functions from both base classes.
- Displays attributes and messages from the derived class.

---

## 📌 3. Multilevel Inheritance

### 🧠 Concept
Inheritance occurs across multiple levels, where a class inherits from a derived class, forming a chain.

### 📋 Algorithm
- Define a base class with a function.
- Create a second class that inherits from the base class.
- Create a third class that inherits from the second class.
- Instantiate the most derived class and access all inherited functions.

### 🧪 Expected Output
- Sequentially displays outputs from grandparent, parent, and child classes.

---

## 📌 4. Hierarchical Inheritance

### 🧠 Concept
Multiple classes inherit from a single base class, each extending or customizing its behavior.

### 📋 Algorithm
- Define a base class with a general-purpose function.
- Create two derived classes that inherit from the base class.
- Each derived class implements its own specialized function.
- Instantiate both derived classes and invoke base and derived functions.

### 🧪 Expected Output
- Displays a shared message from the base class.
- Shows unique outputs from each derived class.

---

## 🧾 Conclusion

This experiment highlights how inheritance in C++ supports:
- **Code reuse** by sharing common functionality.
- **Modularity** through structured class hierarchies.
- **Polymorphism** by enabling flexible object behavior.

Each inheritance type serves a distinct purpose in object-oriented design, and mastering them builds a strong foundation for scalable and maintainable software development.
