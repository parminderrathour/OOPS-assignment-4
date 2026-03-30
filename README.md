# 📘 Object-Oriented Programming — Assignment 4

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/Subject-OOP-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Questions-4-orange?style=for-the-badge" />
</p>

---

## 👤 Student Details

| Field | Details |
|---|---|
| **Name** | Parminder Rathour |
| **Subject** | Object-Oriented Programming (OOP) |
| **Assignment** | Assignment 4 |
| **Language** | C++ |

---

## 📋 Table of Contents

- [About](#about)
- [Questions Covered](#questions-covered)
- [Concepts Used](#concepts-used)
- [How to Run](#how-to-run)
- [File Structure](#file-structure)

---

## 📖 About

This repository contains the solution to **Assignment 4** of the Object-Oriented Programming course. The assignment focuses on **constructors** (default, parameterized, default arguments), **destructors**, and **dynamic memory management** using `new` and `delete` in C++.

---

## ✅ Questions Covered

| Q# | Topic | Description |
|---|---|---|
| Q1 | Constructors (3 types) | Create a `Rectangle` class with a no-argument constructor, a one-parameter constructor (square), and a two-parameter constructor; display area for each |
| Q2 | Default Arguments + Array of Objects + Destructor | Use a single constructor with default arguments to handle all three cases; create an array of `Rectangle` objects and demonstrate destructor calls |
| Q3 | Destructor Verification | Verify that a destructor is automatically called when an object goes out of scope at the end of `main()` |
| Q4 | Dynamic Memory Management | Allocate and deallocate memory dynamically using `new` and `delete` for integers, floats, arrays, class objects, and arrays of objects |

---

## 🧠 Concepts Used

- **Default Constructor** — called when no arguments are passed
- **Parameterized Constructor** — accepts specific values at object creation
- **Default Arguments in Constructor** — single constructor handles multiple cases
- **Destructor (`~ClassName()`)** — automatically called when object is destroyed; used for cleanup
- **Array of Objects** — multiple objects stored and accessed via index
- **Dynamic Memory Allocation** — using `new` to allocate memory at runtime
- **Dynamic Memory Deallocation** — using `delete` and `delete[]` to free memory
- **Dynamic Object Creation** — allocating class objects on the heap using `new`

---

## ▶️ How to Run

1. **Clone this repository:**
   ```bash
   git clone https://github.com/parminderrathour/OOPS-assignment-4.git
   cd OOPS-assignment-4
   ```

2. **Compile the file using g++:**
   ```bash
   g++ parminder_ass4.cpp -o output
   ```

3. **Run the output:**
   ```bash
   ./output
   ```

> 💡 Since all questions share one file, only Q1's `main()` is active by default. To run another question, wrap Q1 in `/* */` and remove `/* */` from the desired question.

---

## 📁 File Structure

```
OOPS-assignment-4/
│
├── parminder_ass4.cpp     # Main C++ file with all 4 solutions
└── README.md              # Project documentation (this file)
```

> ⚠️ **Note:** The `.exe` file in this repo is a compiled Windows binary and is not needed on GitHub. It is recommended to delete it and add a `.gitignore` file to prevent compiled files from being uploaded in the future.

---

## 🛠️ Tools & Environment

- **Language:** C++
- **Compiler:** GCC / G++
- **IDE:** Any C++ compatible IDE (VS Code, Code::Blocks, Dev-C++)

---

<p align="center">Made with ❤️ by Parminder Rathour</p>
