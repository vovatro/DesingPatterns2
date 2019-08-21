#include "Singleton.h"

Singleton::Singleton(int v) :value(v)
{

}

Singleton * Singleton::getObj(int v)
{
	if (obj == nullptr)
		obj = new Singleton(v);
	return obj;
}

int Singleton::getValue() const
{
	return value;
}

void Singleton::setValue(int value)
{
	this->value = value;
}

Logger::Logger(string name):name(name)
{
}

Logger * Logger::getObj(string name)
{
	if (obj == nullptr)
		obj = new Logger(name);
	return obj;
}

void Logger::Print() const
{
	cout << name<<"-active" << endl;
}

void Logger::setName(string name)
{
	this->name = name;
}
