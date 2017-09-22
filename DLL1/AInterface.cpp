#include "stdafx.h"
#include "AInterface.h"  
#include "AClass.h"

AInterface *AFactory::p = 0;
DLL_API AInterface *AFactory::CreateAClass()
{
	if (!p)
	{
		p = new AClass();
	}
	return p;
}
DLL_API void AFactory::DestroyAClass()
{
	if (p)
	{
		delete p;
	}
}
