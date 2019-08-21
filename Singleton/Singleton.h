#pragma once
#include<iostream>
#include<string>
using namespace std;
class Singleton
{
	int value;
	static Singleton* obj;
	Singleton(int v);
public:
	static Singleton*getObj(int v=4100);
	int getValue()const;
	void setValue(int value);
};

class Logger
{
	string name;
	static Logger* obj;
	Logger(string name);
public:
	static Logger*getObj(string name = "user");
	void Print()const;
	void setName(string name);
};