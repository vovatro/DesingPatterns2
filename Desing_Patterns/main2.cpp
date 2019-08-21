#include"AbstractFactory2.h"
#include<fstream>
int main()
{
	GuiElFactory *factory;
	ifstream in("OS.txt");
	string os;
	in >> os;
	if (os == "Windows")
		factory = new WinGuiFactory();
	else if (os == "Mac")
		factory = new MacGuiFactory();
	else
	{
		cout << "Error system name\n";
		return 0;
	}
	in.close();
	Butom* butom=factory->createButom();
	CheckBox* checkBox= factory->createCheckBox();
	RadioBtn* radioBtn= factory->createRadioBtn();
	butom->Print();
	checkBox->Print();
	radioBtn->Print();
	system("pause");
}