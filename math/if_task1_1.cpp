#include <iostream>
#include <clocale>

using namespace std;

/*���� ������ �����, �� ������� �� ����� ������ �� ������������*/
int main() 
{
	setlocale(LC_ALL, "rus"); 
	float x1, x2, x3, x4, sum, com;

	cout << "������� ������ �����" << "\n";
	cin >> x1;
	cout << "������� ������ �����" << "\n";
	cin >> x2;
	cout << "������� ������ �����" << "\n";
	cin >> x3;
	cout << "������� ��������� �����" << "\n";
	cin >> x4;
	
	sum = x1 + x2 + x3 + x4;
	com = x1 * x2 * x3 * x4;
	if (sum < com) cout << "����� ������ ������������ �� " << com - sum << endl; 
	
	cin.get();  //��� �������� ������ (���������� iostream)
	return 0;	
}

