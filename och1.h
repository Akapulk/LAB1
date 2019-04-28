#include "och.h"
class och1 : protected och
{
public:
	void process();
	void och1_put() {
		this->put();
	}
	void och1_show() {
		this->show();
	}
	void och1_cut() {
		this->cut();
	}
	void och1_copy(och1 *copy) {
		this->copy(copy);
	}
	void och1_sub(och1 *first, och1 *second) {
		this->sub(first, second);
	}
};