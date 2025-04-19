#include<iostream>
#include<string>
using namespace std;
//Shallow Copy 
/*
class Book{
public:
	int id;
	int*price;
	Book(int id, int price)
	{
		this->id = id;
		this->price = new int (price);//dynamically allocate it
	}
	Book(const Book& temp)
	{
		this->id = temp.id;
		this->price = temp.price;//Shallow Copy
	}
	~Book()
	{
		delete[] price;
	}
};


int main()
{
	Book math(1, 200);

	Book oop = math;//Shallow Copy
	cout << "id of book is " << math.id << endl;
	cout << "price of book is " << *math.price << endl;
	//So accessing oop.price after math is deleted leads to undefined behavior
	cout << "id of book is " << oop.id << endl;
	cout << "price of book is " << *oop.price << endl;

	

	return 0;
}*/


//Deep Copy
class Book{
public:
	int id;
	int*price;
	Book(int id, int price)
	{
		this->id = id;
		this->price = new int(price);//dynamically allocate it
	}
	Book(Book& const  temp)
	{
		this->id = temp.id;
		this->price = new int (*temp.price);//Deep Copy(Dynamically)...Create a new memory allocation and copy the value
	}
	~Book()//deallocating dynamic value
	{
		delete[] price;
	}
};


int main()
{
	Book math(1, 200);

	Book oop = math;//Deep Copy
	cout << "id of book is " << math.id << endl;
	cout << "price of book is " << *math.price << endl;
	//modifying oop price will not affect math price
	cout << "id of book is " << oop.id << endl;
	cout << "price of book is " << *oop.price << endl;



	return 0;
}