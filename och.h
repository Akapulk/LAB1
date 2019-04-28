#include <iostream>
#include <cstdlib>
using namespace std;
#include "el.h"

class och
{
private:
	int count;
	el *teale; // начало очередь
protected:
	el gethead();
public:
	och() { teale = NULL; count = 0; };
	int getcount(); // возвращает count
	void show();
	void put(); // добавление нового элемента
	void cut();
	void copy(och *copy); // copy -  уда скопировать очередь
	void sub(och *first, och *second); // сложить очередь first и second
	~och()
	{
		cout << "–абота деструктора базового класса" << endl;
	}
};
