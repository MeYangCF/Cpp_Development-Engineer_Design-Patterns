#include "Template.h"

int main()
{
	TemplateCookedRice* pTemplate = new Porridge(50);
	pTemplate->Cooking();
	delete pTemplate; pTemplate = nullptr;
}