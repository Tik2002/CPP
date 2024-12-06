#include <Serializer.hpp>

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) {*this = other;}

Serializer &Serializer::operator=(const Serializer&){return (*this);}

Serializer::~Serializer(){}

void Serializer::convert(const string& source)
{

}
