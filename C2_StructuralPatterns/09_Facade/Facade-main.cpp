#include "MovieFacade.h"

int main()
{
	MovieFacade* pMovieFacade = new MovieFacade();
	pMovieFacade->OpenMovie();
	pMovieFacade->CloseMovie();
}