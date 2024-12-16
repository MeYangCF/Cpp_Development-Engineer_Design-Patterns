#include "Singleton.h"
#include "Singleton1.h"
#include "Singleton2.h"
#include "Singleton3.h"
#include "Singleton4.h"


int main()
{
	Singleton::Instance()->DoSomething();
	Singleton::DestoryInstance();
}