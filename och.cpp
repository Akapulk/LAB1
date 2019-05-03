#include "och.h"
int och::getcount()
{
	return count;
}

el och::gethead() {
	return *head;
}
void och::cut()
{
	int i = 1;
	el* current = head;
	el* buf;
	int callback;
	if (!teale) {
		cout << "Очередь пуста" << endl;
		system("pause");
		return;
	}
	else {
		teale = teale->prev;
		count--;
		while (i<count)
		{
			current=current->prev;
			i++;
		}
		current->prev = NULL;
		teale=current;
	}
	cout << "Элемент успешно извлечен из очереди" << endl;
	system("pause");
}
void och::copy(och* copy)
{
	if (!count)
	{
		cout << "Очередь пуста" << endl;
		system("pause");
		return;
	}
	el* current = head;
	el* c_Current = new el; // Переменная для обращения к копиям
	copy->head = c_Current;
	c_Current->prev = current->prev;
	c_Current->x = current->x;
	current = current->prev;
	copy->count = count;
	copy->teale = teale;
	cout << "Очередь успешно скопирована" << endl;
	system("pause");
}

void och::put()
{
	int i=0,k;
	cout << "Введите количество элиментов на ввод:";
	cin >> k;
	while (i<k)
	{
		if (head == NULL)
		{
			teale = new el;
			head = teale;
			teale->prev = NULL;
			cout << "x = ";
			cin >> teale->x;
			count++;
		}
		else
		{
			el* current = teale;
			current->prev = new el;
			current = current->prev;
			teale =current;
			current->prev = NULL;
			cout << "x = ";
			cin >> current->x;
			count++;
			
		}
		i++;
	}
	cout << "Элементы успешно добавлены" << endl;
	system("pause");
}



void och::show()
{
	int i = 0;
	el *current = head;
	if (!teale)
	{
		cout << "Очередь пуста" << endl;
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
		cout << "Очереди пусты" << endl;
		system("pause");
		return;
	}
	count = first->getcount() + second->getcount();
	el *current = first->head;
	el *c_Current = new el; // Переменная для обращения к копиям
	c_Current->prev = current->prev;
	c_Current->x = current->x;
	head = c_Current;
	current = current->prev;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	current = second->head;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	c_Current->prev = NULL;
	teale=c_Current;
	cout << "Очереди успешно объеденены и записаны" << endl;
	system("pause");
}
