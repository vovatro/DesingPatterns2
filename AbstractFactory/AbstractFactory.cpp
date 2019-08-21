#include "AbstractFactory.h"

Toy::Toy(string name):name(name)
{
}

void Toy::Print() const
{
	cout << "Toy name:" << name << endl;
}

Bear::Bear(string name):Toy(name+"Bear")
{
}

Cat::Cat(string name):Toy(name+"Cat")
{
}

TeddyCat::TeddyCat():Cat("Teddy")
{
}

TeddyBear::TeddyBear():Bear("Teddy")
{
}

WoodenCat::WoodenCat() : Cat("Wooden")
{
}

WoodenBear::WoodenBear():Bear("Wooden")
{
}

Bear * WoodenToys::createBear()
{
	return new WoodenBear();
}

Cat * WoodenToys::createCat()
{
	return new WoodenCat();
}

Bear * TeddyToys::createBear()
{
	return new TeddyBear();
}

Cat * TeddyToys::createCat()
{
	return new TeddyCat();
}

void useToys(IToysFactory * obj)
{
	Bear* bear=obj->createBear();
	Cat* cat=obj->createCat();
	cat->Print();
	bear->Print();
	system("pause");
}
