#include "stdafx.h"
#include "AInterface.h"
#include "AClass.h"


DLL_API AInterface::AInterface()
{
	m_pImpl = new AClass();
}

DLL_API AInterface::~AInterface()
{
	delete m_pImpl;
}

DLL_API int AInterface::fun()
{
	return m_pImpl->fun();
}