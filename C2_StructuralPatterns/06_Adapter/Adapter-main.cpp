#include "Adaptee.h"
#include "ITarget.h"

int main()
{
	IAdaptee* pAdaptee = new OldClass();
	ITarget* pItarget = new Adapter(pAdaptee);
	pItarget->Request();

	delete pAdaptee; pAdaptee = nullptr;
	delete pItarget; pItarget = nullptr;
}