#include "AbstractFactory2.h"

Element::Element(string name) :name(name)
{
}

void Element::Print() const
{
	cout << name << endl;
}

Butom::Butom(string name) :Element(name)
{
}

CheckBox::CheckBox(string name) : Element(name)
{
}

RadioBtn::RadioBtn(string name) : Element(name)
{
}

WinButom::WinButom(): Butom("Win butom")
{
}

MacButom::MacButom() : Butom("Mac butom")
{
}

WinCheckBox::WinCheckBox(): CheckBox("Win Check Box")
{
}

WinRadioBtn::WinRadioBtn(): RadioBtn("Win Radio Btn")
{
}

MacRadioBtn::MacRadioBtn() : RadioBtn("Mac Radio Btn")
{
}

MacCheckBox::MacCheckBox() : CheckBox("Mac Check Box")
{
}

Butom * WinGuiFactory::createButom()
{
	return new WinButom();
}

CheckBox * WinGuiFactory::createCheckBox()
{
	return new WinCheckBox();
}

RadioBtn * WinGuiFactory::createRadioBtn()
{
	return new WinRadioBtn();
}

Butom * MacGuiFactory::createButom()
{
	return new MacButom();
}

CheckBox * MacGuiFactory::createCheckBox()
{
	return new MacCheckBox();
}

RadioBtn * MacGuiFactory::createRadioBtn()
{
	return new MacRadioBtn();
}
