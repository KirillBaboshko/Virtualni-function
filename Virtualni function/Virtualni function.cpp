#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//class A 
//{
//public:
//	virtual void v_Function();
//};
//class B :public A
//{
//public:
//	virtual void v_Function(void);
//};
//
//class Weapon 
//{
//public:
//	virtual void Use1(void);//атака
//	virtual void Use2(void);//прицеливание
//
//};
//Weapon* Arms[10];
//int TypeOfWeapon;
////if(левая кнопка мыши нажата) Arms[TypeOfWeapon]->Use1();
////else Arms[TypeOfWeapon]->Use2();
//class A
//{
//	public:
//		virtual void v_Function() = 0;
//
//};
class Animal
{
public:
	char Titel[20];
	Animal(const char* t)
	{
		strcpy(Titel, t);
	}
	virtual void speak() = 0;
};
class Frog :public Animal
{
public:
	Frog(const char* Titel) :Animal(Titel) {};
	virtual void speak()
	{
		cout << Titel << " say" << "\'kwa-kwa\'\n";
	}
};
class Dog :public Animal
{
public:
	Dog(const char* Titel) :Animal(Titel) {};
	virtual void speak()
	{
		cout << Titel << " say" << "\'gaw-gaw\'\n";
	}
};
class Cat :public Animal
{
public:
	Cat(const char* Titel) :Animal(Titel) {};
	virtual void speak()
	{
		cout << Titel << " say" << "\'maw-maw\'\n";
	}
};
class Lion :public Cat
{
public:
	Lion(const char* Titel) :Cat(Titel) {};
	
	virtual void speak ()
	{
		cout << Titel << " say" << "\'rrr-rrr\'\n";
	}
	
	
	/*
	virtual int speak ()
	{
		cout << Titel << "say" << "\'rrr-rrr\'\n";
		return 0;
	}
	*/
	//virtual void speak(int When)
	//{
	//	cout << Titel << " say" << "\'rrr-rrr\'\n";
	//}
};
void main()
{
	Animal* animals[4] = { new Dog("Bob"),new Cat("Ser gay"),new Frog("LOX") ,new Lion("Jekan") };
	for (int i = 0; i < 4; i++)
	{
		animals[i]->speak();
	}

}