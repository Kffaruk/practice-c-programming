# C programming

![course outline](images/course_outline.png)

## Table of Contents

1. [1. Basic C Programming Topics](#1-basic-c-programming-topics)
   - [1.1 Translator Program](#11-program-translator-program)  
   - [1.2 Algorithm and Flowchart](#12-algorithm-and-flowchart)  
   - [1.3 Introduction to C program](#13-introduction-to-c-programming)
   - [1.4 First C program and its parts](#14-first-c-program-ans-its-various-parts)  
   - [1.5 Comments and Escape sequences](#15-comments-and-escape-sequences)  
   - [1.6 Keywords, Variables, Data types](#16-keywords-variables-data-types)  
   - [1.7 Input and output functions](#17-input-and-output-functions)  
   - [1.8 Operators](#18-operators)  
   - [1.9 <math.h> library](#19-mathh-library)  
   - [1.10 Control Statement](#110-control-statement)  
   - [1.11 Functions](#111-functions)  
   - [1.12 Arrays](#112-arrays)  
2. [2. Intermediate C]()
   - []()
3. [3. Advanced C](#basic-c)
   - []()

## 1. Basic C Programming Topics

### 1.1 Program? Translator Program?


একটি প্রোগ্রাম হল একটি কাজ সম্পাদনের জন্য নির্দেশাবলীর একটি সেট।

একটি অনুবাদক প্রোগ্রাম হল একটি সফ্টওয়্যার টুল যা সোর্স কোডকে অবজেক্ট কোডে (মেশিন কোড / বাইনারি কোড) অনুবাদ করে। এটি একটি প্রোগ্রামিং ভাষা থেকে অন্য প্রোগ্রামিং ভাষাতে কোড বা নির্দেশাবলী স্থানান্তর করে। এটি সফ্টওয়্যার ডেভেলপমেন্ট প্রক্রিয়ায় একটি গুরুত্বপূর্ণ ভূমিকা পালন করে, ডেভেলপারদের উচ্চ-স্তরের ভাষায় কোড লিখতে সক্ষম করে যা বোঝা এবং রক্ষণাবেক্ষণ করা সহজ, অন্যদিকে অনুবাদক এটিকে মেশিন কোডে রূপান্তর করে যা একটি কম্পিউটার কার্যকর করতে পারে। বিভিন্ন ধরণের অনুবাদক প্রোগ্রাম রয়েছে, প্রতিটি এই প্রক্রিয়ায় একটি নির্দিষ্ট উদ্দেশ্য পূরণ করে।

1. **Compiler:**
   - **উদ্দেশ্য:** একটি কম্পাইলার উচ্চ-স্তরের ভাষায় লেখা একটি প্রোগ্রামের সম্পূর্ণ সোর্স কোডকে একযোগে মেশিন কোড বা অন্য কোনও নিম্ন-স্তরের ভাষায় অনুবাদ করে। এটি একটি এক্সিকিউটেবল ফাইল তৈরি করে যা স্বাধীনভাবে চলতে পারে।
   - **উদাহরণ:** C/C++ এর জন্য GCC (GNU কম্পাইলার সংগ্রহ), জাভার জন্য javac।

2. **Interpreter:**
   -**উদ্দেশ্য:** একজন ইন্টারপ্রেটার কোড লাইন লাইন করে এক্সিকিউট করে, প্রতিটি লাইন তাৎক্ষণিকভাবে অনুবাদ করে এবং এক্সিকিউট করে। এটি একটি স্বাধীন এক্সিকিউটেবল তৈরি করে না; পরিবর্তে, এটি সরাসরি সোর্স কোড ব্যাখ্যা করে এবং এক্সিকিউট করে।
   - **উদাহরণ:** ওয়েব ব্রাউজারে পাইথন ইন্টারপ্রেটার, জাভাস্ক্রিপ্ট ইন্টারপ্রেটার।

3. **Assembler:**
   - **উদ্দেশ্য:** একজন অ্যাসেম্বলার অ্যাসেম্বলি ভাষার কোডকে মেশিন কোডে অনুবাদ করে। অ্যাসেম্বলি ভাষা হল একটি নিম্ন-স্তরের মানব-পঠনযোগ্য ভাষা যা একটি নির্দিষ্ট কম্পিউটারের CPU-এর স্থাপত্যের সাথে ঘনিষ্ঠভাবে মিলে যায়।
   -** উদাহরণ:** x86 অ্যাসেম্বলির জন্য NASM (নেটওয়াইড অ্যাসেম্বলার)।

4. **Linker:**
   -** উদ্দেশ্য:** একটি লিঙ্কার একটি কম্পাইলার দ্বারা তৈরি একাধিক অবজেক্ট ফাইল বা লাইব্রেরিগুলিকে একটি একক এক্সিকিউটেবল ফাইলে একত্রিত করার জন্য দায়ী। এটি একটি প্রোগ্রামের বিভিন্ন অংশের মধ্যে রেফারেন্স সমাধান করে।
   - **উদাহরণ:** ld (GNU Linker), Microsoft Linker (link.exe)।

5. **Loader:**
   -**উদ্দেশ্য:** একটি লোডার একটি এক্সিকিউটেবল প্রোগ্রামকে মেমোরিতে লোড করে যাতে এটি CPU দ্বারা কার্যকর করা যায়। এটি প্রয়োজনীয় মেমোরি বরাদ্দ এবং স্থানান্তরও করে।
   -**উদাহরণ:** অপারেটিং সিস্টেমের লোডার উপাদান।

6. **Preprocessor:**
   - **Purpose:** A preprocessor is a tool that processes the source code before compilation. It handles directives and macros, performs text substitution, and prepares the code for the compiler.
   - **Examples:** The C/C++ preprocessor, which handles `#include` and `#define` directives.

7. **Transpiler (Source-to-Source Compiler):**
   - **Purpose:** A transpiler translates code from one high-level programming language into another high-level programming language. It is often used for migrating codebases or converting code to be compatible with different platforms or frameworks.
   - **Examples:** Babel (JavaScript transpiler), TypeScript compiler (TypeScript to JavaScript).

8. **Cross-Compiler:**
   - **Purpose:** A cross-compiler is designed to generate code for a different target platform or architecture than the one it runs on. This is often used in embedded systems development.
   - **Examples:** ARM cross-compiler, used for developing software for ARM-based microcontrollers on x86-based computers.

9. **Decompiler:**
   - **Purpose:** A decompiler attempts to reverse the process of compilation by translating machine code or executable files back into a higher-level programming language or assembly language. This is often used for reverse engineering and analysis of binaries.
   - **Examples:** IDA Pro, Hex-Rays (for reverse engineering).

Each type of translator program serves a specific role in the software development process, from converting human-readable code into machine code to managing dependencies and loading the program into memory for execution. The choice of which type of translator to use depends on the programming language, target platform, and development requirements.

### 1.2 Algorithm and Flowchart

- [Visit this page to check examples of Algorithm and flowchart](https://engineerstutor.com/2018/08/27/examples-of-algorithms-and-flow-charts-with-c-code/)

An algorithm is a set of well-defined, step-by-step instructions for solving a specific problem or accomplishing a particular task. It serves as a blueprint for a computer program, and it can be implemented in various programming languages. Algorithms are essential in computer science, as they help solve problems efficiently and predictably.

A flowchart is a visual representation of an algorithm that uses various shapes and symbols to represent different elements of the algorithm, such as inputs, processes, decisions, and outputs. Flowcharts make it easier to understand and communicate how an algorithm works, both for programmers and non-programmers. They are commonly used for documenting, planning, and designing algorithms before writing actual code.

Here are some key concepts related to algorithms and flowcharts:

**Algorithms:**

1. **Problem Definition:** Begin by clearly defining the problem or task you want to solve.

2. **Input and Output:** Identify the inputs (data or information required) and the expected outputs (results).

3. **Steps:** Break down the solution into a sequence of steps, each of which performs a specific operation.

4. **Decisions:** Include conditional statements (if-else) for making choices or decisions within the algorithm.

5. **Loops:** Use loops (for, while) for repeating a set of steps when necessary.

6. **Pseudocode:** Before creating a flowchart or writing code, often, it's helpful to describe the algorithm in a high-level, human-readable language called pseudocode.

7. **Efficiency:** Consider the efficiency and performance of the algorithm, aiming for the most efficient solution.

**Flowcharts:**

1. **Start and End:** Every flowchart begins with a "Start" symbol and ends with an "End" symbol.

2. **Processes:** Use rectangular boxes to represent the processing steps or operations in the algorithm.

3. **Decision Points:** Represent decision points (e.g., if-else statements) with diamond-shaped symbols.

4. **Input/Output:** Use parallelograms to denote input and output operations.

5. **Arrows:** Connect the symbols with arrows to indicate the flow of control or data from one step to another.

6. **Flow Control:** Use arrows with labels (e.g., "Yes" or "No") to indicate the direction of flow based on decisions.

7. **Connectors:** Sometimes, you may need to use connectors (small circles) to link different parts of the flowchart.

8. **Annotations:** Add comments and explanations to clarify the purpose of specific steps or decisions.

To create a flowchart for an algorithm, you can use specialized software or even pen and paper. Flowcharts help in visualizing the logic of an algorithm and are valuable tools for designing, documenting, and communicating the solution to others.

While flowcharts are useful for illustrating algorithms, the actual implementation of the algorithm is done through programming languages like C, Java, Python, etc. The flowchart serves as a visual guide to help translate the algorithm into code.

### 1.3 Introduction to C programming

- C is a general-purpose mid-level programming language, a widely-used and influential programming language that was developed in the early 1970s at Bell Labs by Dennis Ritchie.

Here are some key aspects of C programming and reasons why C has been important:

- Efficiency: C is known for its efficiency and low-level control over hardware, making it an ideal choice for system programming, embedded systems, and developing software that requires high performance.

- Standard Library: C provides a rich standard library that includes functions for tasks like file I/O, memory management, string manipulation, and more. This standard library simplifies common programming tasks and allows developers to create efficient programs without reinventing the wheel.

- Learning and Teaching: Mother of Programming language. C is often recommended as a first programming language for beginners because it teaches fundamental programming concepts, such as variables, loops, and functions, in a clear and concise manner. Learning C provides a solid foundation for understanding other programming languages.

- C has been used to write everything from operating systems (including Windows and many others) to complex programs like the Python interpreter, Git, Oracle database, and more.

#### Environment Setup

- code editor (VSCode/Codeblock) and compiler (gcc)

### 1.4 First C program

```c
#include <stdio.h>
int main()
{
  printf("hello world");
  return 0;
}
```

- Let's break down the code to understand each line:

  - #include <stdio.h> The function used for generating output is defined in stdio.h. In order to use the printf function, we need to first include the required file, also called a header file. The <stdio.h> library provides a range of functions for handling input and output operations in C. Some examples: printf(), scanf(), gets(), puts(), putchar(), getchar()

  - int main() The main() function is the entry point to a program. Curly brackets { } indicate the beginning and end of a function (also called a code block). The statements inside the brackets determine what the function does when executed.

  - return 0 Success Indicator: The return 0; statement is a way for a C program to signal to the operating system that it has executed successfully and is terminating without any errors. Error Indicator: If a program encounters an error or unexpected condition during execution, it can use a non-zero value (e.g., return 1;, return -1;) to indicate that something went wrong.
