#include<iostream>
using namespace std;

//Encapsulation
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

								//INHERITANCE

/*class Human//Parent class(superclass)
{
public:
	int age = 0;
	int weight = 0;
	int height = 0;
public:
	int getAge(){
		return this->age;
	}
	void setWeight(int w){
		this ->weight = w;
	}
	int setHeight(int h){
		 height = h;
	}
};
class Male : public Human  //Child Class(Sub-class) //SYNTAX: class (name child) : (modifier) (parent name)
{
public:
	char colour;

	void sleep()
	{
		cout << "Sleeping";
	}

};

int main(){




	Male object1;
	object1.age = 20;//agr values change b kro phir b chly ga aur ye sb usne parent class se inherit kiya hai...
	object1.weight = 78;
	object1.height = 6;
	cout << "Age " << object1.age << endl;
	cout << "Weight " << object1.weight << endl;
	cout << "HEIGHT " << object1.height << endl;
	cout << object1.colour;
	object1.sleep();

	cout << "NOW     /n";
	object1.setWeight(76);
	cout << object1.weight;

	cout << endl << endl << endl;
	cout << "atlast ";
	Human object;
	cout << "Age " << object.age << endl;
	cout << "Weight " << object.weight << endl;
	cout << "HEIGHT " << object.height << endl;
	cout << "NOW     /n";
	object.setWeight(6);
	cout << object.weight;
	
	return 0;
}*/

//MULTI LEVEL INHERITANCE
/*class Animal {

public:
	int age;
	int weight;


public:
	void bark() {
		cout << "barking" << endl;
	}
};

class Dog : public Animal {
	void bark2()
	{
		cout << "function 1";
	}

};

class GermanShepherd : public Dog {


};

int main() {

	Dog g;
	g.bark();//will work

	GermanShepherd d;
	d.bark();//will work
	
	//GermanShepherd g; won't work
	//g.bark2();

	return 0;
}*/

// Multiple Inheritance
/*class Animal {

public:
	int age;
	int weight;


public:
	void bark() {
		cout << "Barking " << endl;
	}
};

class Human {
public:
	int intelligance;

public:
	void speak() {
		cout << "Speaking " << endl;
	}
};

//Multiple Inheritance
class Hybrid : public Animal, public Human {

};


int main() {

	Hybrid obj1;
	cout << "human ";
	obj1.speak();
	cout << endl << "Dog ";
	obj1.bark();


	return 0;
}
*/

//Heiraraichal Inheritance (Parent class se multiple sub class lelo )

/*class A{
public:
	void func1(){
		cout << "inside function1" << endl;
}
};
class B : public A{
public:
	void func2(){
		cout << "inside function 2" << endl;
	}

};

class C : public A{
public:
	void func3(){
		cout << "inside function 3" << endl;
	}
};
int main()
{
	A object1;
	cout << "first ";
	object1.func1();
	cout << endl << endl;


	B object2;
	cout << "second ";
	object2.func1();
	object2.func2(); 
	cout << endl << endl;
	C object3;


	cout << "third ";
	object3.func1()
	object3.func3();
	cout << endl << endl;
}*/
