This C++ program implements a simple Student and Course Management System using Object-Oriented Programming (OOP) concepts. It demonstrates class design, dynamic memory handling, copy constructors, destructors, operator overloading, and static data members.

✨ Features
Student Class:

Dynamically stores name, ID, and 3 enrolled courses

Supports deep copying through a custom copy constructor

Tracks the total number of students using a static variable

Overloaded operators:

>> and << for input/output

== for comparing student IDs

Course Class:

Stores course name and credit hours

Tracks total courses using a static variable

Overloaded operators:

>> and << for input/output

+ for summing credit hours

Memory Management:

Proper allocation and deallocation using new and delete

Custom destructor for safe cleanup

Interactive Console Input:

Accepts user input for students and courses

Displays details using the overloaded << operator

🧪 Sample Operations
Create and display students and courses

Copy student objects and verify deep copy

Add credit hours of two courses

Track total number of students and courses created

📌 Concepts Demonstrated
Classes and objects

Dynamic memory allocation

Deep copy vs shallow copy

Static members and methods

Operator overloading

Friend functions

🛠️ Technologies
Language: C++

Standard: C++11 or later

Tools: g++, Visual Studio, or any standard C++ compiler
