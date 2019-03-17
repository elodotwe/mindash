#include "TestSource.h"
#include "Source.h"



TestSource::TestSource(*void onUpdate(void))
	:Source(onUpdate)
{
	
}

void TestSource::doUpdate() {
	_onUpdate();
}

TestSource::~TestSource()
{
}
