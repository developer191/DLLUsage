#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif

class AInterface
{
public:
	virtual int fun() = 0;
};

class AFactory
{
public:
	static DLL_API AInterface* CreateAClass();
	static DLL_API void DestroyAClass();
private:
	static AInterface *p;
};