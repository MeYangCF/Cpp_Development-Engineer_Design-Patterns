#include "Product.h"
#include "Factory.h"

int main()
{
	DBFactory* pFac = new SQLDBFactory();

	DBConnection* pConn = pFac->CreateDBConnection("some sql connection string");
	DBCommand* pCmd = pFac->CreateDBCommand("some sql command");

	pCmd->Excute(pConn);
}