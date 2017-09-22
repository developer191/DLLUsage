#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif

class AClass;
class AInterface
{
public:
	DLL_API AInterface();
	DLL_API ~AInterface();
	DLL_API int fun();
private:
	AClass *m_pImpl;
};