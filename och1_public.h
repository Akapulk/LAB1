#include "och.h"
class och1 : public och
{
public:
	void process();
	~och1() { cout << "Работа деструктора наследника" << endl; }
};
