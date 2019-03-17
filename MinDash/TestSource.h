#pragma once
#include "Source.h"

class TestSource: public Source<int, void(void)>
{
public:
	TestSource(onUpdate);
	void doUpdate();
	~TestSource();
};

