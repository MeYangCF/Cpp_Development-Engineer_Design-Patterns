#include "Toolbox.h"
#include "Tool.h"

int main()
{
	ToolFactory* pFac = new ToolFactory();
	ToolBox* pBox = new ToolBox(pFac);

	Tool* pTool = pBox->GetTool("Hammer");
	pTool->Use();

}