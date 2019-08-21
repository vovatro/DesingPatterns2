#pragma once
#include<iostream>
#include<string>
using namespace std;
class Element abstract
{
	string name;
public:
	Element(string name);
	void Print()const;
};
//-------------------------------------------------
class Butom:public Element
{
public:
	Butom(string name);
};

class WinButom :public Butom
{
public:
	WinButom();
};

class MacButom :public Butom
{
public:
	MacButom();
};
//-------------------------------------------------
class CheckBox :public Element
{
public:
	CheckBox(string name);
};

class WinCheckBox :public CheckBox
{
public:
	WinCheckBox();
};

class MacCheckBox :public CheckBox
{
public:
	MacCheckBox();
};
//-------------------------------------------------
class RadioBtn :public Element
{
public:
	RadioBtn(string name);
};

class WinRadioBtn :public RadioBtn
{
public:
	WinRadioBtn();
};

class MacRadioBtn :public RadioBtn
{
public:
	MacRadioBtn();
};
//-------------------------------------------------
__interface GuiElFactory
{
public:
	virtual Butom* createButom() = 0;
	virtual CheckBox* createCheckBox() = 0;
	virtual RadioBtn* createRadioBtn() = 0;
};

class WinGuiFactory :public GuiElFactory
{
	virtual Butom* createButom();
	virtual CheckBox* createCheckBox();
	virtual RadioBtn* createRadioBtn() ;
};

class MacGuiFactory :public GuiElFactory
{
	virtual Butom* createButom();
	virtual CheckBox* createCheckBox();
	virtual RadioBtn* createRadioBtn();
};
//-------------------------------------------------