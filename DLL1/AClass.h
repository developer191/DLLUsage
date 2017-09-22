#pragma once
#include "AInterface.h"

class AClass : public AInterface
{
public:
	AClass();
	int fun();
private:
	int m;
};