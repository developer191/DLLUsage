// Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AInterface.h"


int main()
{
	AInterface *p = nullptr;
	p = new AInterface();
	if(p)
	{
		printf("Create class A and call a->fun(), result is %d\n", p->fun());
		delete p;
		p = nullptr;
	}

    return 0;
}

