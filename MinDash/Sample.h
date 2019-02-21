#pragma once
#include <time.h>

template <typename V>
class Sample
{
public:
	Sample::Sample(time_t timestamp, V value);
	~Sample();
};

