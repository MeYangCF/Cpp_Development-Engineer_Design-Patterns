#include "Product.h"

int main()
{
	Product* product =  new NamedProduct("hp computer");

	Product* newProduct = product->Clone();
	newProduct->Show();

	delete product; product = nullptr;
	delete newProduct; newProduct = nullptr;

}