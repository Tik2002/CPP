#pragma once

#include <include.hpp>

class Serializer
{
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer&);
	~Serializer();
};
