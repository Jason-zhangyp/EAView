/********************************************************
[DateTime]:2013.8.30
[Author  ]:Mr.Huang
[Content ]:The main 3d view control,
		EAViewEngine.cpp : main project file.
/********************************************************/

#include "stdafx.h"
#include "EAViewGlobeControl.h"


namespace EAViewEngine
{
	
	System::Void EAViewGlobeControl::EAViewGlobeControl_Load(System::Object^  sender, System::EventArgs^  e)
	{
		/*HANDLE hThread1=CreateThread(NULL,0,RenderThreadProc,NULL,0,NULL);
		CloseHandle(hThread1);*/

		//_beginthread(RenderThreadStart,0,NULL);//��Ⱦ�߳�
		RTHandle = (HANDLE)_beginthreadex(NULL,0,RenderThreadStart,NULL,0,&RTID);
		
		
	}

	//��Ⱦ���̣߳�ȫ�ֺ���
	/*DWORD WINAPI RenderThreadProc(LPVOID lpParameter)
	{
		Instance::EAViewGlobeRun();
		return 0;
	}*/
	unsigned int __stdcall RenderThreadStart(void*)
	{
		Instance::EAViewGlobeRun();
		return 0;
	}
}