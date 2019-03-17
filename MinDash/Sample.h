#pragma once
#include <time.h>

template <typename V>
class Sample
{
private:
	time_t _timestamp;
	V _value;
public:
	Sample<V>::Sample(time_t timestamp, V value);
	~Sample();
	V Sample<V>::get_value();
	time_t Sample<V>::get_timestamp();
};

