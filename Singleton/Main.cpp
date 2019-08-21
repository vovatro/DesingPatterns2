//#include"Singleton.h"
//Singleton*Singleton::obj=nullptr;
//Logger*Logger::obj=nullptr;
//void main()
//{
//	/*Singleton*vallet1 = Singleton::getObj();
//	cout << "Vallet1:";
//	cout << vallet1->getValue()<<endl;
//
//	Singleton*vallet2 = Singleton::getObj(8200);
//	cout << "Vallet2:";
//	cout << vallet2->getValue() << endl;
//	
//	vallet2->setValue(16400);
//	cout << "Vallet2:";
//	cout << vallet2->getValue() << endl;
//	cout << "Vallet1:";
//	cout << vallet1->getValue() << endl;*/
//
//	Logger*login1 = Logger::getObj();
//	cout << "Login1:";
//	login1->Print();
//
//	Logger*login2 = Logger::getObj();
//	cout << "Login2:";
//	login2->Print();
//
//	login2->setName("Admin");
//
//	cout << "Login1:";
//	login1->Print();
//
//	cout << "Login2:";
//	login2->Print();
//	system("pause");
//}
#include"AbstractFactory.h"
void main()
{
	WoodenToys* wooden = new WoodenToys();
	useToys(wooden);
	system("pause");
}