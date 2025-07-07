# C programming


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


**প্রোগ্রাম কী?**
- প্রোগ্রাম হচ্ছে নির্দেশনার একটি তালিকা, যা কোনো নির্দিষ্ট কাজ করতে কম্পিউটারকে বলে।
- তুমি যেকোনো সফটওয়্যার (যেমন: ক্যালকুলেটর, গেম, ওয়েবসাইট ইত্যাদি) ব্যবহার করলেই, তার পেছনে থাকে এক বা একাধিক প্রোগ্রাম।

📌 উদাহরণ:

গুণ করার প্রোগ্রাম:
👉 “দুইটি সংখ্যা নাও → গুণ করো → ফলাফল দেখাও”

🖥️ **অনুবাদক প্রোগ্রাম (Translator Program) কী?**
- কম্পিউটার শুধু মেশিন কোড (০ এবং ১) বোঝে।
- কিন্তু আমরা প্রোগ্রাম লিখি উচ্চ-স্তরের ভাষায় (যেমন C, Python, Java)।

👉 এই দুইয়ের মাঝে অনুবাদ করে দেয় যে সফটওয়্যার, তাকে বলে অনুবাদক প্রোগ্রাম।

🧾 **অনুবাদক প্রোগ্রাম কী করে?**
- উচ্চ-স্তরের কোড (source code) কে নিয়ে
- মেশিন কোড (object code)-এ রূপান্তর করে
- যাতে কম্পিউটার বুঝতে ও চালাতে পারে

📌 কারণ:
আমরা মানুষ → সহজ ভাষা চাই
কম্পিউটার → শুধু 0 আর 1 বোঝে
👉 অনুবাদক = এই দুইয়ের মধ্যে ব্রিজ

1. **Compiler:**
   - **উদ্দেশ্য:** একটি কম্পাইলার উচ্চ-স্তরের ভাষায় লেখা একটি প্রোগ্রামের সম্পূর্ণ সোর্স কোডকে একযোগে মেশিন কোড বা অন্য কোনও নিম্ন-স্তরের ভাষায় অনুবাদ করে। এটি একটি এক্সিকিউটেবল ফাইল তৈরি করে যা স্বাধীনভাবে চলতে পারে।
   - **উদাহরণ:** C/C++ এর জন্য GCC (GNU কম্পাইলার সংগ্রহ), জাভার জন্য javac।

2. **Interpreter:**
   - **উদ্দেশ্য:** একজন ইন্টারপ্রেটার কোড লাইন লাইন করে এক্সিকিউট করে, প্রতিটি লাইন তাৎক্ষণিকভাবে অনুবাদ করে এবং এক্সিকিউট করে। এটি একটি স্বাধীন এক্সিকিউটেবল তৈরি করে না; পরিবর্তে, এটি সরাসরি সোর্স কোড ব্যাখ্যা করে এবং এক্সিকিউট করে।
   - **উদাহরণ:** ওয়েব ব্রাউজারে পাইথন ইন্টারপ্রেটার, জাভাস্ক্রিপ্ট ইন্টারপ্রেটার।

3. **Assembler:**
   - **উদ্দেশ্য:** একজন অ্যাসেম্বলার অ্যাসেম্বলি ভাষার কোডকে মেশিন কোডে অনুবাদ করে। অ্যাসেম্বলি ভাষা হল একটি নিম্ন-স্তরের মানব-পঠনযোগ্য ভাষা যা একটি নির্দিষ্ট কম্পিউটারের CPU-এর স্থাপত্যের সাথে ঘনিষ্ঠভাবে মিলে যায়।
   - **উদাহরণ:** x86 অ্যাসেম্বলির জন্য NASM (নেটওয়াইড অ্যাসেম্বলার)।

4. **Linker:**
   - **উদ্দেশ্য:** একটি লিঙ্কার একটি কম্পাইলার দ্বারা তৈরি একাধিক অবজেক্ট ফাইল বা লাইব্রেরিগুলিকে একটি একক এক্সিকিউটেবল ফাইলে একত্রিত করার জন্য দায়ী। এটি একটি প্রোগ্রামের বিভিন্ন অংশের মধ্যে রেফারেন্স সমাধান করে।
   - **উদাহরণ:** ld (GNU Linker), Microsoft Linker (link.exe)।

5. **Loader:**
   - **উদ্দেশ্য:** একটি লোডার একটি এক্সিকিউটেবল প্রোগ্রামকে মেমোরিতে লোড করে যাতে এটি CPU দ্বারা কার্যকর করা যায়। এটি প্রয়োজনীয় মেমোরি বরাদ্দ এবং স্থানান্তরও করে।
   - **উদাহরণ:** অপারেটিং সিস্টেমের লোডার উপাদান।

6. **Preprocessor:**
   - **উদ্দেশ্য:** প্রিপ্রসেসর হল এমন একটি টুল যা সংকলনের আগে সোর্স কোড প্রক্রিয়া করে। এটি নির্দেশিকা এবং ম্যাক্রো পরিচালনা করে, টেক্সট প্রতিস্থাপন করে এবং কম্পাইলারের জন্য কোড প্রস্তুত করে।
   - **উদাহরণ:** C/C++ প্রিপ্রসেসর, যা #include এবং #define নির্দেশিকা পরিচালনা করে।

7. **Transpiler (Source-to-Source Compiler):**
   - **উদ্দেশ্য:** একটি ট্রান্সপাইলার একটি উচ্চ-স্তরের প্রোগ্রামিং ভাষা থেকে অন্য একটি উচ্চ-স্তরের প্রোগ্রামিং ভাষায় কোড অনুবাদ করে। এটি প্রায়শই কোডবেস স্থানান্তরিত করার জন্য বা বিভিন্ন প্ল্যাটফর্ম বা ফ্রেমওয়ার্কের সাথে সামঞ্জস্যপূর্ণ কোড রূপান্তর করার জন্য ব্যবহৃত হয়।
   - **উদাহরণ:** Babel (জাভাস্ক্রিপ্ট ট্রান্সপাইলার), টাইপস্ক্রিপ্ট কম্পাইলার (টাইপস্ক্রিপ্ট থেকে জাভাস্ক্রিপ্ট)।

8. **Cross-Compiler:**
   - **উদ্দেশ্য:** একটি ক্রস-কম্পাইলার এমনভাবে ডিজাইন করা হয় যাতে এটি যে প্ল্যাটফর্মে চলে তার থেকে ভিন্ন টার্গেট প্ল্যাটফর্ম বা আর্কিটেকচারের জন্য কোড তৈরি করা হয়। এটি প্রায়শই এমবেডেড সিস্টেম ডেভেলপমেন্টে ব্যবহৃত হয়।
   - **উদাহরণ:** ARM ক্রস-কম্পাইলার, x86-ভিত্তিক কম্পিউটারে ARM-ভিত্তিক মাইক্রোকন্ট্রোলারের জন্য সফ্টওয়্যার তৈরির জন্য ব্যবহৃত হয়।

9. **Decompiler:**
   - **উদ্দেশ্য:** একটি ডিকম্পাইলার মেশিন কোড বা এক্সিকিউটেবল ফাইলগুলিকে উচ্চ-স্তরের প্রোগ্রামিং ভাষা বা অ্যাসেম্বলি ভাষায় রূপান্তর করে সংকলনের প্রক্রিয়াটিকে বিপরীত করার চেষ্টা করে। এটি প্রায়শই বিপরীত প্রকৌশল এবং বাইনারি বিশ্লেষণের জন্য ব্যবহৃত হয়।
   - **উদাহরণ:** IDA Pro, Hex-Rays (বিপরীত প্রকৌশলের জন্য)।



### 1.2 Algorithm and Flowchart

- [Visit this page to check examples of Algorithm and flowchart](https://engineerstutor.com/2018/08/27/examples-of-algorithms-and-flow-charts-with-c-code/)



অ্যালগরিদম এবং ফ্লোচার্ট সম্পর্কিত কিছু মূল ধারণা এখানে দেওয়া হল:

## Algorithms:

১. **সমস্যা কী, তা পরিষ্কারভাবে বোঝা**
- তুমি প্রথমে ঠিক করে নাও – তুমি কী সমস্যার সমাধান করতে চাও?
- সহজভাবে সমস্যা বা কাজটি নিজের ভাষায় বুঝে নাও।

২. **ইনপুট ও আউটপুট নির্ধারণ**
- ইনপুট মানে – কোন কোন তথ্য প্রোগ্রামে দেওয়া হবে (যেমন সংখ্যা, নাম ইত্যাদি)।
- আউটপুট মানে – প্রোগ্রাম শেষে কী ফলাফল দেখাবে (যেমন যোগফল, গড়, বার্তা ইত্যাদি)।
- এই দুইটি আগে থেকেই ঠিক করে রাখো।

৩. **ধাপে ধাপে সমাধান ভাঙা**
- পুরো কাজটাকে ছোট ছোট ধাপে ভাগ করো।
-  প্রতিটি ধাপে কী কাজ হবে তা চিন্তা করে লিখো।
- এতে সমাধান পরিষ্কার ও সহজ হয়।

৪. **শর্ত নির্ধারণ**
- যদি কোনো সিদ্ধান্ত নেওয়া লাগে (যেমন – “সংখ্যাটি বড় না ছোট?”), তাহলে if-else বা যদি-না হলে ধরণের চিন্তা যোগ করো।
- এতে তোমার প্রোগ্রাম স্মার্টভাবে সিদ্ধান্ত নিতে পারবে।

৫. **পুনরাবৃত্তি (লুপ) প্রয়োগ**
- যদি কোনো কাজ বারবার করতে হয় (যেমন ১ থেকে ১০ পর্যন্ত ছাপা), তাহলে লুপ (for, while) ব্যবহার করো।
- এতে একই কাজ বারবার নিজে না লিখেও করানো যায়।

৬. **সিউডোকোড (pseudocode) লেখা**
- প্রোগ্রাম লেখার আগে এমনভাবে সাধারণ ভাষায় পুরো সমাধানটি লিখো, যেটা মানুষ সহজে বুঝতে পারে।
- একে বলে সিউডোকোড – এটা কোড না, আবার সাধারণ বাক্যও না। মাঝামাঝি কিছু।
- এতে কোড লেখা সহজ হয়ে যায়।

৭. **কার্যকারিতা (Efficiency) বিবেচনা**
- কোন পদ্ধতিতে কম সময় ও কম মেমোরি খরচ হবে – সেটা ভাবো।
- দ্রুত ও কম জটিল সমাধান বেছে নেওয়াই ভালো অ্যালগরিদমের লক্ষণ।

## Flowcharts:


১. **শুরু ও শেষ (Start and End)**
- প্রতিটি ফ্লোচার্টের শুরুতে থাকে “শুরু” এবং শেষে থাকে “শেষ”।
- এই অংশগুলো ডিম্বাকার (oval) চিহ্ন দিয়ে দেখানো হয়।

২. **প্রক্রিয়া (Process)**
- কোনো ধাপে যদি কোনো কাজ বা গণনা করতে হয় (যেমন: যোগফল বের করা, কোনো মান নির্ধারণ ইত্যাদি), তাহলে সেটা আয়তাকার বাক্সে (rectangle) লেখা হয়।
- উদাহরণ:
সময় = দূরত্ব / গতি

৩. **সিদ্ধান্ত (Decision Point)**
- যদি কোনো শর্ত চেক করতে হয় (যেমন – সংখ্যা জোড় না বিজোড়?), তাহলে সেটা হীরার মতো চিহ্নে (diamond shape) দেখানো হয়।
- এতে সাধারণত দুটি রাস্তা থাকে:
  - হ্যাঁ (Yes)
  - না (No)

৪. **ইনপুট ও আউটপুট (Input/Output)**
- ব্যবহারকারীর কাছ থেকে ডেটা নেওয়া বা স্ক্রিনে কিছু দেখানো হলে তা সমান্তরালগ্রাম (parallelogram) আকারে দেখানো হয়।
- উদাহরণ:
ইনপুট: সংখ্যা নাও
আউটপুট: ফলাফল দেখাও

৫. **তীরচিহ্ন (Arrows)**
- এক ধাপ থেকে অন্য ধাপে ডেটা বা নির্দেশনার প্রবাহ বোঝাতে তীরচিহ্ন ব্যবহার করা হয়।
- কোন কাজের পরে কোনটা হবে – এটা বোঝায়।

৬. **প্রবাহ নিয়ন্ত্রণ (Flow Control)**
- যদি-না হলে শর্তের জন্য তীরের গায়ে “হ্যাঁ” বা “না” লেখা হয়।
- এতে ফ্লোচার্টের পথ আরও পরিষ্কার হয়।

৭. **সংযোগকারী (Connector)**
- যদি ফ্লোচার্ট অনেক বড় হয় বা একটি অংশ থেকে অন্য দূরের অংশে যেতে হয়, তখন মাঝখানে একটি গোল চিহ্ন (circle) ব্যবহার করা হয়।
- এটি দুটি ভিন্ন অংশকে যুক্ত করে।

৮. **টীকা বা মন্তব্য (Annotation)**
- কোন ধাপে কী হচ্ছে, সেটা যদি ব্যাখ্যা করে লিখতে চাও, তাহলে মন্তব্য বা টীকা যোগ করতে পারো।
- এতে প্রোগ্রামের উদ্দেশ্য পরিষ্কার হয়।
একটি অ্যালগরিদমের জন্য একটি ফ্লোচার্ট তৈরি করতে, আপনি বিশেষায়িত সফ্টওয়্যার বা এমনকি কলম এবং কাগজ ব্যবহার করতে পারেন। ফ্লোচার্টগুলি একটি অ্যালগরিদমের যুক্তি কল্পনা করতে সাহায্য করে এবং ডিজাইন, ডকুমেন্টেশন এবং অন্যদের কাছে সমাধান যোগাযোগের জন্য মূল্যবান হাতিয়ার।
।
**![image](https://github.com/user-attachments/assets/2db24edf-4512-47b7-a6f5-f58fa95cf996)**

### 1.3 Introduction to C programming

- C প্রোগ্রামিং  কী?
- C একটি জনপ্রিয় ও শক্তিশালী মধ্য-স্তরের প্রোগ্রামিং ভাষা।

- এটি সাধারণ কাজ থেকে শুরু করে,অপারেটিং সিস্টেম, ড্রাইভার, গেম, সফটওয়্যার তৈরিতে ব্যবহার হয়।

**কেন C ভাষা গুরুত্বপূর্ণ?**
- দক্ষতা ও গতি (Efficiency & Performance) C খুবই দ্রুত চলে এবং কম মেমোরি ব্যবহার করে।
- C ভাষা শেখা মানে প্রোগ্রামিংয়ের মূল ধারণা (ভেরিয়েবল, লুপ, ফাংশন ইত্যাদি) শেখা।
- এটি কম্পিউটারের হার্ডওয়্যারের সঙ্গে সরাসরি কাজ করতে পারে।
- C কে বলা হয়:"Programming Language-এর মা"



 **স্ট্যান্ডার্ড লাইব্রেরি সুবিধা**
- C ভাষার রয়েছে একটি সমৃদ্ধ স্ট্যান্ডার্ড লাইব্রেরি,যেখানে অনেক দরকারি কাজের ফাংশন আগে থেকেই তৈরি আছে।

📌 যেমন:

- ফাইল থেকে লেখা-পড়া (File I/O)

- মেমোরি কন্ট্রোল (Memory Management)


### Environment Setup

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

- প্রতিটি লাইন বোঝার জন্য কোডটি ভেঙে ফেলা যাক:

  
- ✅ #include <stdio.h>
- এই লাইনটি বলে, stdio.h নামের একটি হেডার ফাইল প্রোগ্রামে যোগ করতে হবে।
- stdio.h হচ্ছে একটি লাইব্রেরি, যেখানে C প্রোগ্রামের ইনপুট ও আউটপুটের (যেমন: স্ক্রিনে কিছু প্রিন্ট করা বা ইউজারের কাছ থেকে ইনপুট নেওয়া) জন্য দরকারি ফাংশনগুলো রাখা থাকে।

- এই লাইব্রেরিতে যে ফাংশনগুলো আছে, তার কিছু উদাহরণ:

printf() – কিছু প্রিন্ট করতে ব্যবহার হয়

scanf() – ইউজার ইনপুট নিতে ব্যবহার হয়

gets() / puts() – স্ট্রিং ইনপুট ও আউটপুট

putchar() / getchar() – একটি করে ক্যারেক্টার নিতে বা দেখাতে

✅ int main()
- main() ফাংশন হলো প্রতিটি C প্রোগ্রামের মূল দরজা।

- এই ফাংশন থেকেই প্রোগ্রাম চালু হয়।

- { ও } চিহ্নের মধ্যে থাকা কোডগুলো main() ফাংশনের কাজ হিসেবে চালানো হয়।

- আমরা এই বন্ধনীর ভিতরেই প্রোগ্রামের মূল কাজগুলো লিখি।

✅ return 0;
- এই লাইনের মানে হলো – “প্রোগ্রামটি ঠিকভাবে শেষ হয়েছে”।

- return মূলত কম্পিউটারকে জানায়, প্রোগ্রাম চালানোর ফলাফল কী হয়েছে।

- যদি আমরা return 0; লিখি, তাহলে সেটা বোঝায় – সব কিছু ঠিকঠাক হয়েছে, কোনো ত্রুটি (error) হয়নি।

- আর যদি return 1; বা অন্য কোনো অ-শূন্য সংখ্যা দিই, তাহলে সেটা বোঝায় – প্রোগ্রামে কিছু সমস্যা হয়েছে।

hallenge 1: print your name, email and address
1.5 Comments and Escape sequences
In C programming, comments and escape sequences are important for code documentation and character representation. It also help for debugging and leave explanation of codes. Here's an explanation of each:

Comments:

Comments in C are used to provide explanations or descriptions within the code. They are ignored by the compiler and serve as documentation for programmers. C provides two types of comments:

Single-Line Comments: Single-line comments begin with // and continue to the end of the line. They are often used for short explanations on a single line.

// This is a single-line comment
Multi-Line Comments: Multi-line comments are enclosed between /* and */. They can span multiple lines and are often used for longer explanations.

/* This is a
   multi-line comment */
Example of comments in C code:

#include <stdio.h>

int main() {
   // This is a single-line comment
   printf("Hello, World!\n"); // This comment is at the end of the line

   /* This is a
      multi-line comment */
   
   return 0;
}
Escape Sequences:

Escape sequences are special character combinations that are used to represent characters that are not directly typable or printable. They begin with a backslash \ followed by a character. Here are some common escape sequences in C:

\n: Newline character.
\t: Tab character.
\": Double quotation mark.
\': Single quotation mark.
\\: Backslash.
Escape sequences are often used when you need to insert special characters into strings, such as newline characters to format text or escape quotation marks within a string.

Example of escape sequences in C code:

#include <stdio.h>

int main() {
   printf("This is a newline: \n");
   printf("This is a tab: \t");
   printf("This is a double quote: \"\n");
   printf("This is a single quote: \'\n");
   printf("This is a backslash: \\\n");

   return 0;
}
When you run the code, you will see that the escape sequences are interpreted and displayed as the corresponding special characters.

