# Dynamic Libraries in C
- Overview
This README provides an introduction to dynamic libraries in the C programming language. It explains what dynamic libraries are, how they work, how to create them, and how to use them in your programs.

# What is a Dynamic Library?
A dynamic library, also known as a shared library, is a collection of pre-compiled code and functions that can be reused by multiple programs. It allows programmers to avoid duplicating code by storing common functionality in a separate library file. This makes programs smaller, modular, and easier to maintain.

# How do Dynamic Libraries Work?
When a program needs to use a function or code from a dynamic library, it dynamically loads the library at runtime. The program locates the library file, reads the necessary code, and links it to the program's execution. This allows the program to access and execute the functions provided by the library.

# Creating a Dynamic Library
To create a dynamic library in C, you typically follow these steps:

1. Write the code for the functions or code you want to share in a separate source file(s).
2. Compile the source file(s) into a dynamic library using the appropriate compiler flags.
* For example, using GCC on Linux or macOS: gcc -shared -o libexample.so example.c
* On Windows with MinGW: gcc -shared -o example.dll example.c
3. The compiler generates a dynamic library file (e.g., libexample.so or example.dll) that contains the compiled code.
