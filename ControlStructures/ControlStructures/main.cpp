#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	/*if (temperature >= 0)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�������" << endl;
	}*/

	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 35)
	{
		cout << "����� ��� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -20)
	{
		cout << "������� �����" << endl;
	}
	else
	{
		cout << "�� �� ��������� ������" << endl;
	}

	/*int number;
	cout << "������� �����: "; cin >> number;
	if (number >= 0 || number <= 10)
	{
		cout << "���� ��������!" << endl;
	}
	else
	{
		cout << "�� Firefox" << endl;
	}*/

	cout << "��� ������ ������� Escape, ��� ����������� ������� ����� �������.\n";
	if (_getch() != 27)main();
}

/*if (Condition1)
{
	code1;
}
else if (Condition2)
{
	code2;
}
else ....
....
....
else if (ConditionN)
{
	codeN;
}
else
{
	default code;
}*/