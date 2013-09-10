/********************************************************
[DateTime]:2013.8.30
[Author  ]:Mr.Huang
[Content ]:this is the main class for developers
/********************************************************/

#pragma once
#include "stdafx.h"
#include <osgDB/ReadFile>
#include <osgViewer/Viewer>
#include <Windows.h>
#include "Instance.h"
#include "IEAViewGlobe.h"
#include "EAViewFuncLib.h"

namespace EAViewEngine
{

	public ref class EAViewGlobe:public System::Object//,IEAViewGlobe
	{
	public:
		EAViewGlobe(void);
		/// <summary>
		/// ����һ��OSG��ģ���ļ�
		/// </summary>
		/// <param name="file">����ģ���ļ���·��</param>
		void LoadOSGModel(System::String^ file);//string file);
	private:
		osgViewer::Viewer* _viewer;
		
	};


}