📚 Library Management System in C++
This C++ program models a basic Library Management System using Object-Oriented Programming (OOP) principles. It demonstrates the use of classes, encapsulation, constructors (default, parameterized, and copy), setters and getters, and object relationships in a real-world context.

🔍 Overview
The program consists of three main classes:

Book: Represents a book with title, author, publication year, and ID.

Library: Contains library name, location, and a featured book.

Librarian: Represents a librarian who can update the featured book in the library.

✨ Features
Implements encapsulation through private members and public getters/setters.

Includes constructors (default, parameterized, and copy) for each class.

Validates input (e.g., publication year must be positive).

Allows a librarian to update the featured book of a library.

Demonstrates class composition (Library contains a Book).

📄 Code Highlights
Book Class:

Handles book-related data with input validation.

Contains a display function for showing book details.

Library Class:

Contains name, location, and a Book object.

Displays complete library info, including the featured book.

Librarian Class:

Can update the featured book in a Library.

Stores librarian’s name and employee ID.

