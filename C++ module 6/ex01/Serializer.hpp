#pragma once

class Serializer
{
public:
	static uintptr_t serialize(Data* ptr);
private:
	Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer&);
	~Serializer();
};
