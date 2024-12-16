#include "Visitor.h"
#include "Element.h"

int main()
{
	ElementA elementA;
	ConcreteVisitor visitor;
	elementA.Accept(&visitor);

	std::cin.get();
}