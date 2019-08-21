#include"AbstractFactory.h"
void main()
{
	WoodenToys* wooden=new WoodenToys();
	useToys(wooden);
	system("pause");
}