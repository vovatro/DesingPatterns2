#pragma once
#include<iostream>
#include<string>
using namespace std;
class Toy abstract
{
	string name;
public:
	Toy(string name);
	void Print()const;
};
class Bear :public Toy
{
public:
	Bear(string name);
};
class Cat :public Toy
{
public:
	Cat(string name);
};
class TeddyCat :public Cat
{
public:
	TeddyCat();
};
class TeddyBear :public Bear
{
public:
	TeddyBear();
};

class WoodenCat :public Cat
{
public:
	WoodenCat();
};
class WoodenBear :public Bear
{
public:
	WoodenBear();
};
__interface IToysFactory
{
public:
	virtual Bear* createBear()=0;
	virtual Cat* createCat()=0;
};
class WoodenToys :public IToysFactory
{
	virtual Bear* createBear();
	virtual Cat* createCat();
};
class TeddyToys :public IToysFactory
{
	virtual Bear* createBear();
	virtual Cat* createCat();
};

void useToys(IToysFactory* obj);