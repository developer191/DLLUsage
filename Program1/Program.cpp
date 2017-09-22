// Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AInterface.h"


int main()
{
	AInterface* a = AFactory::CreateAClass();
	if(a)
	{
		printf("Create class A and call a->fun(), result is %d\n", a->fun());
		AFactory::DestroyAClass();
	}

    return 0;
}

