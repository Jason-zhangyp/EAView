#pragma once
#include "stdafx.h"
//#include <osgDB/ReadFile>
//#include <osgViewer/Viewer>
#include <string>

using namespace System;

namespace EAViewEngine
{
	public class EAViewFuncLib
	{
	public:
		EAViewFuncLib(void);
		~EAViewFuncLib(void);
		///<summary>
		///���йܵ�Stringת��std::string
		///<summary>
		static std::string ConvertToString(System::String^ str);
	};
}