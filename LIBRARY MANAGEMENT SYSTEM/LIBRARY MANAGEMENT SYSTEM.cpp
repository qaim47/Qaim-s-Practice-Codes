/*
#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
	string title;
	string author;
	int publicationYear;
	int id;

public:
	Book()
	{
		//default constructor
		title ="";
		author ="";
		this->publicationYear = 0;
		this->id = 0;
	}

	//parametrized Constructor...
	Book(string title, string author, int publicationyear, int id)
	{
		this->title = title;
		this->author = author;
		this->publicationYear = publicationyear;
		this->id = id;
	}
	//copy constructor...
	Book(const Book& temp)
	{
		this->title = temp.title;
		this->author = temp.author;
		this->publicationYear =temp.publicationYear;
		this->id =temp.id;
	}
	//setters
	void setTitle(string t)
	{
		this->title = t;
	}
	void setAuthor(string name)
	{
		this->author = name;
	}
	void setPublicationYear(int year)
	{
		if (year > 0){
			this->publicationYear = year;
		}
		else
			cout << "Enter year correctly" << endl;
	}
	void setID(int ID)
	{
		if (ID > 0){
			this->id = ID;
		}
		else
			cout << "Enter Your ID Correctly" << endl;
	}
	//getters
	string getTitle()
	{
		return title;
	}
	string getAuthor()
	{
		return author;
	}
	int getPublicationYear()
	{
		return publicationYear;
	}
	int getID()
	{
		return id;
	}
	void const displayInfo()
	{
		cout << "Book Title is:" << title << endl
			<< "Author Name is:" << author << endl
			<< "Publication year is:" << publicationYear << endl
			<< "ID is:" << id << endl << endl;
	}

};
class Library{
private:
	string name;
	string location;
	Book featuredBook;
public:
	//parametrized constructor
	Library(string name,string location,Book featuredBook)
	{
		this->name = name;
		this->location = location;
		this->featuredBook = featuredBook;
	}
	//setters
	void setName(string n)
	{
		if (n.empty())
		{
			cout << "Name Cannot be empty..." << endl;
		}
		else {
			this->name = n;
		}
	}
	void setLocation(string loc)
	{
		if (loc.empty())
		{
			cout<<"Location cannot be empty..." << endl;
		}
		else
		{
			this->location = loc;
		}
		}
	void setFeaturedBook(const Book& book)
	{
		this->featuredBook = book;
	}
	//getter
	string getName(){
		return name;
	}
	string getLocation(){
		return location;
	}
	Book getFeaturedBook(){
		return featuredBook;
	}
	void const displayLibraryInfo(){
		cout << "Name of Library is:" << name << endl
			<< "Location of Library is:" << location << endl
			<< "A Featured Book in Library:" << endl ;
		featuredBook.displayInfo();
	}
};
class Librarian{
private:
	string name;
	int employeeID;
public:
	//parametrized constructor
	Librarian(string name,int ID)
	{
		this->name = name;
		this->employeeID = ID;
	}
	//setters
	void setName(string n)
	{
		if (n.empty())
		{
			cout << "Name Cannot be empty..." << endl;
		}
		else
		{
			this->name = name;
		}
	}
	void setEmployeeID(int id)
	{
		if (id > 0)
		{
			this->employeeID = id;
		}
		else
		{
			cout << "Enter Valid ID";
		}
	}
	//getters
	string getName()
	{
		return name;
	}
	int getEmployeeID(){
		return employeeID;
	}
	void updateFeaturedBook(Library& library, const Book&book)
	{
		library.setFeaturedBook(book);
	}
};



int main()
{
	cout << "\t\t\t\t" << "Library Management System " << endl << endl;//TITLE OF ASSIGNMENT
	
	
	Book oop("oop", "Qaim", 2020, 2114);
	Library ucp("UCP Library", "UCP", oop);
	Librarian a1("ALI", 1122);

	a1.updateFeaturedBook(ucp, oop);
	ucp.displayLibraryInfo();



	cout << "After Modifications..." << endl;//you can add negative int value or empty name to check validation error
	oop.setTitle("MATHS");
	oop.setAuthor("SAAD");
	oop.setPublicationYear(-1997);//setting it negative intentionally to check validation check...
	oop.setID(1213);

	ucp.setName("");//leaving it empty intentionally to check validation check...
	ucp.setLocation("LAHORE");
	ucp.setFeaturedBook(oop);

	a1.setName("asad");
	a1.setEmployeeID(1445);
	a1.updateFeaturedBook(ucp, oop);
	ucp.displayLibraryInfo();
	

	return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;

class Book{
private:
	string title;
	string author;
	int publicationYear;
	int id;
public:
	//Default Constructor
	Book(string title, string author, int publicationYear, int id)
	{
		string title = " ";
		string author = " ";
		int publicationYear = 0;
		int id = 0;
	}

	//Parameterized Constructor
	Book(string title, string author, int publicationYear, int id)
	{
		this->title = title;
		this->author = author;
		this->id = id;

		if (publicationYear > 0)
		{
			this->publicationYear = publicationYear;
		}
		else
		{
			cout << "Re-Enter.Publication year must be positive." << endl;
			{
				this->publicationYear = 0;
			}
		}
	}

	//Copy Constructor
	Book(const Book&other)
	{
		this->title = other.title;
		this->author = other.author;
		this->id = other.id;

		if (publicationYear > 0)
		{
			this->publicationYear = other.publicationYear;
		}
		else
		{
			cout << "Re-Enter.Publication year must be positive." << endl;
			{
				this->publicationYear = 0;
			}
		}
	}

	//Use of Setters:
	void setTitle(string title)
	{
		this->title = title;
	}

	void setAuthor(string author)
	{
		this->author = author;
	}

	void setPublicationYear(int publicationYear)
	{
		if (publicationYear > 0)
		{
			this->publicationYear = publicationYear;
		}
		else {
			cout << "Re-Enter.Publication year must be positive." << endl;
		}
	}

	void setId(int id)
	{
		this->id = id;
	}

	//Use of Getters
	string getTitle()
	{
		return title;
	}

	string getAuthor()
	{
		return author;
	}

	int getPublicationYear()
	{
		return publicationYear;
	}

	int getId()
	{
		return id;
	}

	void displayInfo()
	{
		cout << "Book Title: " << title;
		cout << "Book Autor: " << author;
		cout << "Publication Year: " << publicationYear;
		cout << "Book ID: " << id;
	}
};

class Library{
private:
	string name;
	string location;
	Book featuredBook;
public:
	//Paramterized Constructor
	Library(string name, string location, const Book& featuredBook)
	{
		this->name = name;
		this->location = location;
		this->featuredBook = featuredBook;
	}

	//Copy Constructor
	Library(const Library&other)
	{
		this->name = other.name;
		this->location = other.location;
		this->featuredBook = other.featuredBook;
	}

	//Use of Setters
	void setName(string name)
	{
		this->name = name;
	}
	void setLocation(string location)
	{
		this->location = location;
	}
	void setfeaturedBook(const Book& book)
	{
		this->featuredBook = book;
	}

	//Use of Getters
	string getName()
	{
		return name;
	}
	string getLocation()
	{
		return location;
	}
	Book getFeaturedBook()
	{
		return book;
	}

	void displayLibraryInfo() const
	{
		cout << "Library Name: " << name << endl;
		cout << "Location: " << location << endl;
		cout << "Featured Book Details: " << endl;
		featuredBook.displayInfo();
	}
};

class Librarian{
private:
	string name;
	int employeeId;
public:
	//Default Constructor
	Librarian(string name, int employeeId)
	{
		string name = " ";
		int employeeId = 0;
	}

	//Parameterized Constructor
	Librarian(string name, int employeeId)
	{
		this->name = name;
		this->employeeId = emlpoyeeId;
	}

	//Use of Setters
	void setname(string name)
	{
		this->name = name;
	}

	void setemployeeId(int employeeId)
	{
		this->employeeId = employeeId;
	}

	//Use of Getters
	string getname()
	{
		return name;
	}

	int getemployeeId()
	{
		return employeeId;
	}

public:
	void updateFeaturedBook(Library& library, const Book& book)
	{
		library.setfeaturedBook(book);
	}
};

int main()
{
	Book detail("C++ Programming", "JOHN", 2005, 1221);
	Library info(, "Library", "123 Lahore", detail);

	Librarian name("ALI", 133);
	name.updateFeaturedBook(info, detail);
	info.displayLibraryInfo();



	return 0;
}