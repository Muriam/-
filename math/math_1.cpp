#include <cmath>
#include <iostream>
#include <conio.h>
#include <iomanip> // ��� ������� ���-�� ���� ����� ������� ��� ������ float

using namespace std;

int main()
{
	int t = 1, 
	    z = 3;	
	float y, x;
	
	y = sin(t);
	x = 4 * pow(y,2) / (4 * z - 2 * pow(t,3));
	
	cout <<	"result " << x << endl;	

		//�������� ���������� �� ���������� � �������
		int a = 8, b = 2, c; 
		c = pow(8,2);
		cout << c << endl;
		
		//�������� ���������� �� ���������� ������
		cout << fixed << setprecision(2) << "sine 1 = " << y << endl; // fixed � setprecision(2) - ��� ������� ���-�� ���� ����� �������
	
	getch();
	return 0;	
}


