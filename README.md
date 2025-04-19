# Qaim-s-Practice-Codes
multiple codes of courses like pf,oop and dsa

#include<iostream>
using namespace std;


/* in case of public class
class Hero
{
public: //agr public ni kronga to main k andr ye 2 properties access ni hoskti.
//properties
int health;
char level;
};
int main()
{
Hero ali;//user defined datatype
ali.health = 75;
ali.level = 'A';
cout << "Health is " << ali.health << endl;
cout << "Level is " << ali.level << endl;
return 0;
}
*/




/*if u want to set it private class but also want to access outside class...like if u want to set password so that  only selected members can access. 

class Hero
{
private:
	//properties
	int health;
	char level;

public:
	int getHealth()
	{
		return health;
	}
	char getLevel()
	{
		return level;
	}
	void setHealth(int h)
	{
		health = h;
	}
	void setLevel(char ch)
	{
		level = ch;
	}
};
int main()
{
	Hero ali;//user defined datatype
	cout << "Previous Properties" << endl;
	//use getter 
	cout << "Health is " << ali.getHealth() << endl;
	cout << "Level is " << ali.getLevel() << endl;
	//use setter
	ali.setHealth(75);
	ali.setLevel('A');
	cout << "Now Properties" << endl;
	cout << "Health is " << ali.getHealth() << endl;
	cout << "Level is " << ali.getLevel() << endl;

	return 0;
}


/*size
class hero
{
	short int o;
	char j;
	int k;
	
	
};
int main()
{
	cout << sizeof(hero) << endl;

	return 0;
}


*/

/*memonry allocation
class Hero
{
private:
//properties
int health;
char level;

public:
int getHealth()
{
health = 76;
return health;
}
char getLevel()
{
level = 'A';
return level;
}
void setHealth(int h)
{
health = h;
}
void setLevel(char ch)
{
level = ch;
}
};
int main()
{
//static allocation
Hero a;//user defined datatype
cout << "level is " << a.getLevel() << endl;
cout << "health is " << a.getHealth() << endl;

//dynamic allocation
Hero *b = new Hero;
cout << "level is " << (*b).getLevel() << endl;
cout << "health is " << (*b).getHealth() << endl;



return 0;
}
*/
/*
//Setters of pointers attributes (char *) or setting name in class(private) 
#include <iostream>
using namespace std;

class Hero
{
private:
	int health;
	char level;
	char* name;

public:
	int getHealth()
	{
		return health;
	}
	char getLevel()
	{
		return level;
	}
	char* getName() // Corrected return type
	{
		return name;
	}
	void setHealth(int h)
	{
		health = h;
	}
	void setLevel(char ch)
	{
		level = ch;
	}
	void setName(char* n)
	{
		//name = n; //wrong way of doing it
		int size = strlen(n);  //to calculate size of char array strlen is function.
		name = new char[size + 1];  //it is better to dynamically allocate name array.//size+1 iz bcz strlen only counts cahr in array doesnot count '/0'  
		for (int i = 0; i < size; i++)
		{
			name[i] = n[i];
		}
		name[size] = '\0'; // Corrected null terminator
	}
};

int main()
{
	char myName[20] = "Mohsin";
	Hero obj;
	obj.setName(myName);
	myName[0]='A'
	cout << "Name: " << obj.getName() << endl; // Print the name

	return 0;
}
*/




	
