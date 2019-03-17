#include "Sample.h"
#include <time.h>

template <typename V>
Sample<V>::Sample(time_t timestamp, V value)
{
	_timestamp = timestamp;
	_value = value;
}

template <typename V>
Sample<V>::~Sample()
{
}

template <typename V>
time_t Sample<V>::get_timestamp()
{
	return _timestamp;
}

template <typename V>
V Sample<V>::get_value()
{
	return _value;
}