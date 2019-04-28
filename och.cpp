#include "och.h"
int och::getcount()
{
	return count;
}

el och::gethead() {
	return *teale;
}
void och::cut()
{
	int i = 0;
	el* current = teale;
	el* buf;
	int callback;
	if (!teale) {
		cout << "ќчередь пуста" << endl;
		system("pause");
		return;
	}
	else {
		teale = teale->prev;
	}
	cout << "Ёлемент успешно извлечен из очереди" << endl;
	system("pause");
}
void och::copy(och* copy)
{
	if (!count)
	{
		cout << "ќчередь пуста" << endl;
		system("pause");
		return;
	}
	el* current = teale;
	el* c_Current = new el; // ѕеременна€ дл€ обращени€ к копи€м
	copy->teale = c_Current;
	c_Current->prev = current->prev;
	c_Current->x = current->x;
	current = current->prev;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	c_Current->prev = NULL;
	copy->count = count;
	cout << "ќчередь успешно скопирована" << endl;
	system("pause");
}

void och::put()
{
	int i=0,k;
	cout << "¬ведите количество элиментов на ввод:";
	cin >> k;
	while (i<k)
	{
		if (teale == NULL)
		{
			teale = new el;
			teale->prev = NULL;
			cout << "x = ";
			cin >> teale->x;
			count++;
		}
		else
		{
			el *current = teale;

			while (current->prev != NULL)
				current = current->prev;
			current->prev = new el;
			current = current->prev;
			current->prev = NULL;
			cout << "x = ";
			cin >> current->x;
			count++;
			
		}
		i++;
	}
	cout << "Ёлементы успешно добавлены" << endl;
	system("pause");
}



void och::show()
{
	int i = 0;
	el *current = teale;
	if (!teale)
	{
		cout << "ќчередь пуста" << endl;
		system("pause");
		return;
	}
	while (current != NULL)
	{
		cout << "[" << ++i << "] " << current->x << endl;
		current = current->prev;
	}
	system("pause");
}


void och::sub(och *first, och *second)
{
	if (!first->getcount() || !second->getcount())
	{
		cout << "ќчереди пусты" << endl;
		system("pause");
		return;
	}
	count = first->getcount() + second->getcount();
	el *current = first->teale;
	el *c_Current = new el; // ѕеременна€ дл€ обращени€ к копи€м
	c_Current->prev = current->prev;
	c_Current->x = current->x;
	teale = c_Current;
	current = current->prev;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	current = second->teale;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	c_Current->prev = NULL;
	cout << "ќчереди успешно объеденены и записаны" << endl;
	system("pause");
}