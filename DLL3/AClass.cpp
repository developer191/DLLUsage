// DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "AClass.h"

AClass::AClass():m(9)
{
}

AClass::~AClass()
{}

int AClass::fun()
{
	return m;
}

