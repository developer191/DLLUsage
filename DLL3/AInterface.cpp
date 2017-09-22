#include "stdafx.h"
#include "AInterface.h"
#include "AClass.h"

DLL_API AInterface::AInterface()
{
	m_pImpl = std::unique_ptr<AClass>(new AClass());
}

DLL_API AInterface::~AInterface()
{
}

DLL_API int AInterface::fun()
{
	return m_pImpl->fun();
}