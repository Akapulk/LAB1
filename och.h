#include <iostream>
#include <cstdlib>
using namespace std;
#include "el.h"

class och
{
private:
	int count;
	el *teale; // ������ �������
protected:
	el gethead();
public:
	och() { teale = NULL; count = 0; };
	int getcount(); // ���������� count
	void show();
	void put(); // ���������� ������ ��������
	void cut();
	void copy(och *copy); // copy - ���� ����������� �������
	void sub(och *first, och *second); // ������� ������� first � second
	~och()
	{
		cout << "������ ����������� �������� ������" << endl;
	}
};
