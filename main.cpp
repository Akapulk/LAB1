//#include "och1_private.h"
//#include "och1_public.h"
#include "och1_protected.h"
int main()
{
	int menu;
	och1 a; // ��������
	och1 b; // �����
	och1 c; // ������� a � b
	int callback;
	setlocale(LC_ALL, "Russian");
	while (1)
	{
		system("CLS");
		cout << "1 � ���������� �������� � ����� �������" << endl
			<< "2 � ���������� �������� � ������ �������" << endl
			<< "3 � ����� ������� �� �����" << endl
			<< "4 � ���������� ���������� ��������" << endl
			<< "5 � �������� ����� �������" << endl
			<< "6 � ������� ������������ ������� � ������ � ����� ���������� �� �����" << endl
			<< "7 � ����� �� ���������" << endl;
		cin >> menu;
		switch (menu)
		{
		case 7:
			return 0;
		case 1:
			a.och1_put();
			//a.put();
			break;
		case 2:
			a.och1_cut();
			//a.cut();
			break;
		case 3:
			a.och1_show();
			//a.show();
			break;
		case 4:
			a.process();
			break;
		case 5:
			a.och1_copy(&b);
			//a.copy(&b);
			cout << "������� �� �� �����? 1/0" << endl;
			cin >> callback;
			if (callback)
			{
				b.och1_show();
				//b.show();
			}
			break;
		case 6:
			c.och1_sub(&a, &b);
			//c.sub(&a,&b);
			c.och1_show();
			//c.show();
			break;
		case 8:
			c.process();
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
