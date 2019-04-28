//#include "och1_private.h"
#include "och1_public.h"
//#include "och1_protected.h"


void och1::process()
{
	el *current= &(this->gethead());
	float  max;
	int divider = 1;
	int i = 0,summ=0;

	while (current != nullptr) {
	summ+=current->x;
		current = current->prev;
		i++;
	}
	summ /=i;
	i = 0;
	current = &(this->gethead());
	while (current != nullptr) {
		if ((current->x > summ)&&((current->x%2)==0)) {
			i++;
		}
		current = current->prev;
	}
	cout << "Количество элементов четных, которые больше среднего арифметического " << i << endl;
	system("pause");
}
