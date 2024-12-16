#include "Canvas.h"
#include "Decorator.h"

/*
������n���� �粻ͬ��ɫ�Ļ�����BlueCanvas��RedCanvas
������չm������Ի�������ͬ��ʽ��װ�Ρ�BorderDecorator��FrameDecorator

����������չ���֧�̳С�

���ü̳У�������Ϊ��1+n+n*m
����װ��ģʽ��������Ϊ��1+n+1+m
*/

int main()
{
	Canvas* cvs = new RedCanvas();
	Decorator* dcr = new BorderCanvas(cvs);

	dcr->Draw();

	delete cvs; 
	cvs = nullptr;

	delete dcr; 
	dcr = nullptr;
}