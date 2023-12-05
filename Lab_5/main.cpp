#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    RightTriangle rt(7, 2);
    cout << "����� ������������ ����������: " << rt.area() << std::endl;

    IsoscelesTriangle it(4, 6, 50);
    cout << "����� ������������� ����������: " << it.area() << std::endl;

    EquilateralTriangle et(8);
    cout << "����� ��������������� ����������: " << et.area() << std::endl;

    system("pause");
	return 0;
}