#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int  aValue = 76;
	int *aPtr = &aValue;
	
	
	cout << aValue << endl;  //�������� ����������
    cout << *aPtr << endl;	 //��������� �� �������� ���������
    cout << &aValue << endl; //����� ������, ��� ��������� ����������
	
	
	getch();
	return 0;	
}
